/*
 * Reproducing fstest generic/042
 * 1. Fill the file system with known data so that later files will have old,
 *    uncleared data in them (setup)
 * 2. Delete the file used to fill the file system with data (setup)
 * 3. Touch the file used in run() so we know it should always exist (setup)
 * 4. Write 64k of known data to file
 * 5. zero a 4k block in file at offset 60k
 * 6. Crash
 *
 *
 * For reordering replays that don't have all/most operations:
 * The file should be zero length
 *
 * For reordering replays that have all/most operations:
 * The file should be 64k with the known data written in (4) for the first 60k,
 * the final 4k should be zero due to the zero operation
 *
 * For in-order replays:
 * There are no Checkpoint()s, this should be the same as the above case
 */

#include <fcntl.h>

#include "generic_042_base.h"

namespace fs_testing {
namespace tests {

class Generic042Fzero: public Generic042Base {
 public:
   Generic042Fzero() : Generic042Base(FALLOC_FL_ZERO_RANGE) {}

   int check_test(unsigned int last_checkpoint, DataTestResult *test_result)
       override {
     int res = CheckBase(test_result);
     if (res <= 0) {
       // Either something went wrong or the file size was 0.
       return res;
     } else {
       res = CheckDataBase(test_result);
       if (res < 0) {
         return res;
       }

       return CheckDataWithZeros(test_result);
     }
   }
};

}  // namespace tests
}  // namespace fs_testing

extern "C" fs_testing::tests::BaseTestCase *test_case_get_instance() {
  return new fs_testing::tests::Generic042Fzero;
}

extern "C" void test_case_delete_instance(fs_testing::tests::BaseTestCase *tc) {
  delete tc;
}

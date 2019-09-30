run: 
	cp ../code/tests/seq1/j-lang-files/j-lang10 .
	python2 xfstestAdapter.py -b base_xfstest.sh -t j-lang10 -p output/ -n 001 -f generic
	tail output/001
	tail output/001.out

clean:
	rm -rf output/
	rm -rf btrfs/
	rm -rf f2fs/
	rm -f j-lang10

sample:
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang255 -p output/ -n 568 -f generic  
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang308 -p output/ -n 569 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang181 -p output/ -n 570 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang37  -p output/ -n 571 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang316 -p output/ -n 572 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang189 -p output/ -n 573 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang191 -p output/ -n 574 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang94  -p output/ -n 575 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang254 -p output/ -n 576 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang322 -p output/ -n 577 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang311 -p output/ -n 578 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang168 -p output/ -n 579 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang266 -p output/ -n 580 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang144 -p output/ -n 581 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang51  -p output/ -n 582 -f generic 
	python2 xfstestAdapter.py -b base_xfstest.sh -t ../code/tests/seq1/j-lang-files/j-lang240 -p output/ -n 583 -f generic 

failing:
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang01 -p btrfs/ -n 194 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang02 -p btrfs/ -n 195 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang03 -p btrfs/ -n 196 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang04 -p btrfs/ -n 197 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang05 -p btrfs/ -n 198 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang06 -p btrfs/ -n 199 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang07 -p btrfs/ -n 200 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang08 -p btrfs/ -n 201 -f btrfs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang09 -p f2fs/ -n 002 -f f2fs
	python2 xfstestAdapter.py -b base_xfstest.sh -t failing_tests/j-lang10 -p f2fs/ -n 003 -f f2fs

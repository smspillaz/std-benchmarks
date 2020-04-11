merge: test_merge.cpp Makefile
	c++ -O3 test_merge.cpp -o merge

inplace_merge: test_inplace_merge.cpp Makefile
	c++ -O3 test_inplace_merge.cpp -o inplace_merge

sort: test_sort.cpp Makefile
	c++ -O3 test_sort.cpp -o sort

benchmark: merge inplace_merge sort
	echo "merge"
	hyperfine ./merge
	echo "inplace_merge"
	hyperfine ./inplace_merge
	echo "sort"
	hyperfine ./sort

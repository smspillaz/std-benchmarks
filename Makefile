merge: test_merge.cpp Makefile
	c++ -g -O3 -std=c++11 test_merge.cpp -o merge

inplace_merge: test_inplace_merge.cpp Makefile
	c++ -g -O3 -std=c++11 test_inplace_merge.cpp -o inplace_merge

sort: test_sort.cpp Makefile
	c++ -g -O3 -std=c++11 test_sort.cpp -o sort

benchmark: merge inplace_merge sort
	echo "merge"
	hyperfine -r 1000 ./merge
	echo "inplace_merge"
	hyperfine -r 1000 ./inplace_merge
	echo "sort"
	hyperfine -r 1000 ./sort

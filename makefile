all:
# g++ -std=c++17 -lgtest -g test_vector.cc -o test -lgtest_main
	g++ -std=c++17 test_vector.cc -o test -lgtest -lgtest_main
	#CK_FORK=no leaks --atExit -- ./test
	# valgrind ./test
	./test
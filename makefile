all:
	g++ -std=c++17 -lgtest -g test_vector.cc -o test -lgtest_main
	#CK_FORK=no leaks --atExit -- ./test
	./test
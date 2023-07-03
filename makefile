all:
	g++ -std=c++17 -lgtest test_array.cc -o test -lgtest_main
	./test
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	constexpr size_t array_size = 10;
	int ia[array_size];

	for (size_t ix=1; ix <= array_size; ++ix)
		ia[ix] = ix;   // the range of the index of arrart ia is from 0 to 9. ia[array_size] doesn't exist the code will induce overflow  越界导致缓冲区溢出

	// correction:
	for (size_t ix=1; ix < array_size; ++ix)
		ia[ix] = ix;   // ia[array_size] doesn't exist it will create overflow


	return 0;
}
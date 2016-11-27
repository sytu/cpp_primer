#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	unsigned long ul1 = 3, ul2 = 7;  //ul1(2) = 0011  ul2(2) = 0111
	cout << (ul1 & ul2)  << endl; // => 3 == 0011
	cout << (ul1 | ul2) << endl;  // => 7   == 0111
	cout << (ul1 && ul2) << endl;  // => 1(true)
	cout << (ul1 || ul2) << endl;  // => 1(ture)

	return 0;
}
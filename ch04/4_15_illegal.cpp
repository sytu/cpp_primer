#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	double dval;
	int ival;
	int *pi;

	// incorrect
	// dval = ival = pi = 0;
	// this is illegal because it's trying to assign the value of a pointer, which is an address, to an int

	// correct 1
	dval = ival = *pi = 0;
	// correct 2
	dval = ival = 0;
	pi = 0;
	
	return 0;
}
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	unsigned u  = 10, u2 = 42;
	cout << u2 - u << endl;  // => 32 
	cout << u - u2 << endl;  // => 4294967264    (10 - 42) + 4294967296 = 4294967296 - 32 = 4294967264

	int i = 10, i2 = 42;
	cout << i2 - i << endl;  // => 32 
	cout << i - i2 << endl;  // => -32
	cout << i - u << endl;   // => 0
	cout << u - i << endl;	 // => 0
	//more:
	cout << i - u2 << endl;  // => 4294967264    type int is automatically converted to type unsigned
	return 0;
}
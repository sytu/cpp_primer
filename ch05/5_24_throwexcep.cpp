#include <iostream>
using namespace std;

int main(void) {
	int v1,v2;
	cin >> v1 >> v2;
	if (v2 == 0) throw runtime_error("the second number cannot be 0"); 
	// => libc++abi.dylib: terminating with uncaught exception of type std::runtime_error: the second number is 0 
	cout << v1 / v2 << endl; 
	return 0;
}
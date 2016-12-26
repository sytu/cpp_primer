#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;

int main(void) {
	vector<int> ivec;
	cout << ivec.at(0) << endl; // libc++abi.dylib: terminating with uncaught exception of type std::out_of_range: vector
	cout << ivec[0] << endl; 
	cout << ivec.front() << endl; // segmentation fault
	cout << *ivec.begin() << endl;  // segmentation fault
}
#include <iostream>
#include <memory>

using std::cout; using std::cin; using std::endl; 
using std::unique_ptr;

int main(void) {
	unique_ptr<int> up(new int(100));
	cout << *up << endl; 
	// unique_ptr<int> up2(up); // error: call to implicitly-deleted copy constructor of 'unique_ptr<int>'
	// up = new int(200); // error: no viable overloaded '='
}
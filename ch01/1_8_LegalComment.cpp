#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {

	cout << "/*" << endl;
	cout << "*/" << endl;
	// cout << /* */ << endl;  //expected expression
	//cout << /* "*/" */<< endl;   //mising " because the first double quote has been commented out. Compiler will consider this statement as incomplete.
	cout << /* "*/" /* "/*" */<< endl; 

	return 0;
}


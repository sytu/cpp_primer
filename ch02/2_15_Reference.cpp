#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	//a.
	int ival = 1.01;
	//legal but has a wanrning
	//warning: implicit conversion from 'double' to 'int' changes value from 1.01 to 1

	//b.
	// int &rval1 = 1.01;
	// reference has to refer an actual existing object but not a literal constant.
	//error: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'double'

	//c.
	int &rval2 = ival;
	//legal
	
	//d.
	// int &rval3;
	//illgeal because we cannot let the reference refer the other object after definition so the reference has to be initilized
	//error: declaration of reference variable 'rval3' requires an initializer

	return 0;
}
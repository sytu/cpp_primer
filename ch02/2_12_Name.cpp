#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	// int double = 3.14; this is because the keyword in C++ cannot be used as the name of a variable
	//error: cannot combine with previous 'int' declaration specifier
	int _  = 3;
	//legal
	// int catch-22;
	//error: expected unqualified-id
	// int 1_or_2 = 1;
	//error: expected unqualified-id  this is because the name of variable cannot start with number but character or underscore
	double Double = 3.14;
	//legal
	return 0;
}
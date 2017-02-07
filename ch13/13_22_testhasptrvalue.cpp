#include <iostream>
#include "13_22_hasptrvalue.h"

using std::cout; using std::cin; using std::endl; 

int main(void) {
	HasPtr p1("hello");
	cout << *p1 << endl; 

	HasPtr p2(p1);
	cout << *p2 << endl; 

	HasPtr p3 = p1;
	p3 = p3;
	p3 = p1;
	cout << *p3 << endl; 	

	*p2 = "hi";
	*p3 = "no";

	cout << *p1 << endl; 
	cout << *p2 << endl; 
	cout << *p3 << endl; 
}
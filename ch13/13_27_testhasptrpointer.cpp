#include <iostream>
#include "13_27_hasptrpointer.h"

using std::cout; using std::cin; using std::endl; 

int main(void) {
	HasPtr p1("hi");
	HasPtr p2(p1);

	HasPtr p3("heeelllli");
	p2 = p3;

	*p2 = "aha";
	cout << *p3 << endl; // => aha 
	*p3 = "xxxxxxxx";
	cout << *p2 << endl; // => xxxxxxxx

}
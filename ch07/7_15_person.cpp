#include "Person.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	Person p1("sytu");
	print(cout, p1) << endl;
	Person p2;
	print(cout, p2) << endl;
	Person p3("stan", "beijing");
	print(cout, p3) << endl;
	Person p4(cin);
	print(cout, p4) << endl;

}
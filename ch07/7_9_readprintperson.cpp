#include "Person.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	Person p;
	read(cin, p);   			// <= sytu beijing
	print(cout, p) << endl;	// => Name: sytu Address: beijing 
}
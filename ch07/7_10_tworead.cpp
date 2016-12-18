#include "Person.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	Person p1;
	Person p2;
	if (read(read(cin, p1), p2)) {    // <= sytu beijing   <= james sanantonio   the return value of read() is an istream object so the condition reads two value from input stream to two object
		print(cout, p1) << endl;      // => Name: sytu Address: beijing
		print(cout, p2) << endl;	  // => Name: james Address: sanantonio
		
	}   			
}
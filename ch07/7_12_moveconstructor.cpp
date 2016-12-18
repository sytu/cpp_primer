#include "Sales_data.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	Sales_data i1;
	print(cout, i1) << endl;	

	Sales_data i2("nogi-1");
	print(cout, i2) << endl;	

	Sales_data i3("akb-2", 3, 15);
	print(cout, i3) << endl;	

	Sales_data i4(cin);
	print(cout, i4) << endl;	
}
#include "Sales_data.h"
#include <iostream>
using namespace std;

int main(void) {
	Sales_data total(cin);
	if (!total.isbn().empty()) {
		istream &is = cin;
		while (is) {
			Sales_data trans(is);
			if (trans.isbn() == total.isbn()) {
				total = add(total, trans);
			} else {
				print(cout, total) << endl; 
				total = trans;
			}
		}
		print(cout, total) << endl; 
	} else {
		cerr << "Not proper data input." << endl;
		return -1;
	}
	return 0;
}


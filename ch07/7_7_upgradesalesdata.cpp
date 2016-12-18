#include "Sales_data.h"
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
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

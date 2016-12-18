#include "Sales_data.h"
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (trans.isbn() == total.isbn()) {
				total.combine(trans);
			} else {
				cout << "BookNo: " << total.isbn() << endl
				 	 << "units_sold: " << total.units_sold << endl
				 	 << "Revenue: " << total.revenue << endl; 
				total = trans;
			}
		}
		cout << "BookNo: " << total.isbn() << endl
		 	 << "Units Sold: " << total.units_sold << endl
		 	 << "Revenue: " << total.revenue << endl; 
	} else {
		cerr << "Not proper data input." << endl;
		return -1;
	}
	return 0;
}

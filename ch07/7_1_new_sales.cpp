// #include "Sales_data.h"
#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main(void) {
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (trans.bookNo == total.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			} else {
				cout << "BookNo: " << total.bookNo << endl
				 	 << "units_sold: " << total.units_sold << endl
				 	 << "Revenue: " << total.revenue << endl; 
				total = trans;
			}
		}
		cout << "BookNo: " << total.bookNo << endl
		 	 << "Units Sold: " << total.units_sold << endl
		 	 << "Revenue: " << total.revenue << endl; 
	} else {
		cerr << "Not proper data input." << endl;
		return -1;
	}
	return 0;
}

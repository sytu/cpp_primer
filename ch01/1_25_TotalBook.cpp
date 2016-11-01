/*g++ -std=c++11*/
#include <iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	Sales_item total;

	cout << "Enter the record: " << endl;

	if (cin >> total) {
		Sales_item trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			} else {
				cout << "The total record of ISBN ["
					 << total.isbn() << "] :" << endl
					 << total << endl;
				total = trans;
			}
		}
		cout << "The total record of ISBN ["
			 << total.isbn() << "] :" << endl
			 << total << endl;
	} else {
		cout << "Error input." << endl;
		return -1;
	}

	return 0;
}
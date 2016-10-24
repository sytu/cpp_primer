/*g++ -std=c++11*/
#include <iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	Sales_item trans1, trans2;
	int num = 1;

	cout << "Enter the book record:" << endl;

	//029-111-2222-A 19 23.58
	if (cin >> trans1) {
		while(cin >> trans2) {
			if (compareIsbn(trans1, trans2)) {
				num++;
			} else {
				cout << trans1.isbn() << "has " << num << "records." << endl;
				trans1 = trans2;
				num = 1;
			}
		}
		cout << trans1.isbn() << "has " << num << "records." << endl;
	} else {
		cout << "No correct data input." << endl;
		return -1;
	}

	return 0;
}
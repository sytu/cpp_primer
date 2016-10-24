/*g++ -std=c++11*/
#include <iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	Sales_item trans, total;

	cout << "Enter the book record:" << endl;

	//029-111-2222-A 19 23.58
	if (cin >> total) {
		while(cin >> trans) {
			if (trans.isbn() == total.isbn()) {
			// if (compareIsbn(trans, total)) {
				total += trans;
			} else {
				cout << "The ISBN of these books are different." << endl;
				return -1;
			}
		}
		cout << "The total information:" << endl 
			 << total << endl << endl;
	} else {
		cout << "No correct data input." << endl;
		return -1;
	}

	return 0;
}
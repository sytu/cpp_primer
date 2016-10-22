#include <iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	Sales_item book;

	cout << "Enter your book record:" << endl;

	while (cin >> book) {
		//form: 029-111-2222-A 19 23.58
		cout << endl 
			 << "ISBN, sold, sale, price:" << endl
			 << book << endl;
	}

	return 0;
}
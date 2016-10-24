/*g++ -std=c++11*/
#include <iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	Sales_item book_1, book_2;

	cout << "Enter the book record:" << endl;

	//029-111-2222-A 19 23.58
	cin >> book_1 >> book_2;

	if (compareIsbn(book_1, book_2)) {
		cout << endl << book_1 + book_2 << endl << endl;
	} else {
		cout << "The ISBN of two books are different." << endl;
	}

	return 0;
}
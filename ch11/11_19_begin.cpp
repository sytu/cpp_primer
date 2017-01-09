#include <iostream>
#include <set>
#include "../ch07/Sales_data.h"

using std::cout; using std::cin; using std::endl; 
using std::multiset; using std::pair;

using pFun = bool (*)(const Sales_data &lhs, const Sales_data &rhs);

bool cmpIsbn(const Sales_data &lhs, const Sales_data &rhs) {
	return lhs.isbn() < rhs.isbn();
}

int main(void) {
	multiset<Sales_data, pFun> bookstore(cmpIsbn);
	multiset<Sales_data, pFun>::iterator iter = bookstore.begin();
	// pair<const Sales_data, pFun>::iterator iter = bookstore.begin();
}
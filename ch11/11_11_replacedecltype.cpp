#include <iostream>
#include <set>
#include "../ch07/Sales_data.h"

typedef bool (*pFun)(const Sales_data &lhs, const Sales_data &rhs);
// using pFun = bool (*)(const Sales_data &lhs, const Sales_data &rhs);

bool cmpIsbn(const Sales_data &lhs, const Sales_data &rhs) {
	return lhs.isbn() < rhs.isbn();
}

using std::cout; using std::cin; using std::endl; 
using std::multiset; 

int main(void) {
	multiset<Sales_data, pFun> bookstore(cmpIsbn);
}
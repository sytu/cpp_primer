#include "../ch01/Sales_item.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

inline bool compIsbn(const Sales_item &lhs, const Sales_item &rhs) {
	return lhs.isbn() < rhs.isbn();
}

int main(void) {
	istream_iterator<Sales_item> i_it(cin), eof;
	ostream_iterator<Sales_item> o_it(cout, "\n");

	vector<Sales_item> siv;

	while (i_it != eof) 
		siv.push_back(*i_it++);

	if (siv.empty()) {
		cerr << "No data?" << endl; 	
		return -1;
	}

	cout << endl; 

	sort(siv.begin(), siv.end(), compIsbn);

	auto l = siv.begin();
	while (l != siv.end()) {
		auto item = *l;
		auto r = find_if(l + 1, siv.end(), 
			[item] (const Sales_item &i_next) {
				return item.isbn() != i_next.isbn();
			});
		o_it = accumulate(l + 1, r, item);
		l = r;
	}

	cout << endl; 
	return 0;
}	





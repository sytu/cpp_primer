#include <iostream>
#include <vector>
#include "Sales_data.h"

using std::cout; using std::cin; using std::endl; 
using std::vector;

inline void Print(const vector<Sales_data> &v) {
	for (auto i : v) {
		print(cout, i);
		cout << endl; 
	}
}

int main(void) {
	vector<Sales_data> sv;
	Sales_data item;
	while (read(cin, item))
		sv.push_back(item);
	Print(sv);
	stable_sort(sv.begin(), sv.end(), 
		[](const Sales_data &lhs, const Sales_data &rhs) { return lhs.isbn().size() < rhs.isbn().size(); });
	cout << "AfterSort: " << endl; 
	Print(sv);
}
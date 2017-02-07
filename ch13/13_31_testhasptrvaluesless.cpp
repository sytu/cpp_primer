#include <iostream>
#include <vector>

#include "13_31_hasptrvaluesless.h"

using std::cout; using std::cin; using std::endl; using std::vector;
using std::to_string;

int main(void) {
	vector<HasPtr> vh;
	int n = 9;
	for (int i=0; i<n; ++i)
		vh.push_back(to_string(n-i));
	for (auto p : vh)
		cout << *p << " ";
	cout << endl;  

	sort(vh.begin(), vh.end());

	for (auto p : vh)
		cout << *p << " ";
	cout << endl;  

}	
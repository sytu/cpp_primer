#include <iostream>
#include <vector>
#include <list>

using std::cout; using std::cin; using std::endl; using std::vector; using std::list;

void PrintV(const vector<double> &v) {
	for (auto i : v)
		cout << i << " ";
	cout << endl;  
}

void PrintV(const vector<int> &v) {
	for (auto i : v)
		cout << i << " ";
	cout << endl;  
}

int main(void) {
	// a
	list<int> li = {1,2,3};
	vector<double> dv(li.begin(), li.end());
	PrintV(dv);

	// b
	vector<int> iv = {3,2,1};
	vector<double> dv2(iv.begin(), iv.end());
	PrintV(dv2);
}
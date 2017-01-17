#include <iostream>
#include <vector>
#include <new>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::cerr; using std::nothrow;

vector<int> * newVec() {
	return new (nothrow) vector<int>;
}

void readVec(vector<int> *pv) {
	int i;
	while (cin >> i)
		pv->push_back(i);
}

void printVec(vector<int> *pv) {
	for (const auto i : *pv)
		cout << i << " ";
}


int main(void) {
	vector<int> *pv = newVec();
	if (!pv) {
		cerr << "no enough memory" << endl; 
		return -1;
	}
	readVec(pv);
	printVec(pv);

	delete pv;
	pv = nullptr;
}
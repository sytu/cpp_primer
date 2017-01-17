#include <iostream>
#include <vector>
#include <memory>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::cerr; using std::nothrow; using std::shared_ptr; using std::make_shared;

shared_ptr<vector<int>> newVec() {
	return make_shared<vector<int>>();
}

void readVec(shared_ptr<vector<int>> spv) {
	int i;
	while (cin >> i)
		spv->push_back(i);
}

void printVec(shared_ptr<vector<int>> spv) {
	for (const auto i : *spv)
		cout << i << " ";
}


int main(void) {
	shared_ptr<vector<int>> spv = newVec();
	if (!spv) {
		cerr << "no enough memory" << endl; 
		return -1;
	}
	readVec(spv);
	printVec(spv);
}
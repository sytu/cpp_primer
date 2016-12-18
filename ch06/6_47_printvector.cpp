#include <iostream>
#include <vector>
using namespace std;
using Iter = vector<int>::iterator;

// #define NDEBUG

void printVect(vector<int> &ivec) {
	#ifndef NDEBUG
		cout << "size of vector: " << ivec.size() << endl; 
	#endif
	if (ivec.begin() != ivec.end()) {
		auto last = ivec.back();
		ivec.pop_back();
		printVect(ivec);
		cout << last << " "; 
	}
}

int main(void) {
	vector<int> ivec = {1,2,3,3,4,4};
	printVect(ivec);
	return 0;
}
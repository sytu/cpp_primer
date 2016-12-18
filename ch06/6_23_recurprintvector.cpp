#include <iostream>
#include <vector>
using namespace std;
using Iter = vector<int>::const_iterator;

void printRecur(vector<int> &ivec) {
	if (!ivec.empty()) {
		cout << *ivec.begin() << " "; 
		ivec.erase(ivec.begin());
		printRecur(ivec);
	}
}

// better
void printRecur2(Iter beg, Iter end) {
	if (beg != end) {
		cout << *beg << " "; 
		printRecur2(++beg, end);
	}
}

// best
void printRecur3(vector<int> &ivec) {
	if (ivec.begin() != ivec.end()) {
		auto last = ivec.back();
		ivec.pop_back();
		printVect(ivec);
		cout << last << " "; 
	}
}

int main(void) {
	vector<int> ivec = {1,2,3,4,5};
	printRecur(ivec);
	cout << endl; 
	printRecur2(ivec.begin(), ivec.end());
	cout << endl; 
	return 0;
}
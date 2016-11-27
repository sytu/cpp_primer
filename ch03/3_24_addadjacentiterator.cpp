#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> ivec;
	int num;

	// read
	while (cin>>num) {
		ivec.push_back(num);
	}	

	unsigned n = ivec.size();

	// a.
	cout << "a: " << endl; 
	for (auto ita=ivec.begin(); ita!=ivec.end()-1; ita++)
		cout << *ita + *(ita+1) << endl; 

	// b1.
	cout << "b1: " << endl; 
	auto mid = ivec.begin() + n/2;
	auto end = ivec.end();
	for (auto beg=ivec.begin(); beg!=mid+1; beg++) {
		if (beg == mid && n%2==0) break;
		end -= 1;
		cout << *beg + *end << endl; 
	}

	// b2.
	cout << "b2: " << endl; 
	auto en = ivec.end() - 1;
	for (auto st=ivec.begin(); st<=en; st++, en--) {
		cout << *st + *en << endl; 
	}
	return 0;
}
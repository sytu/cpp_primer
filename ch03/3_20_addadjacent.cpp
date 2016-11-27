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

	cout << endl;
	unsigned n = ivec.size();

	//add & cout
	// a.
	for (unsigned k=1; k<n; k++)
		cout << ivec[k]+ivec[k-1] << endl; 

	// b1.
	for (unsigned p=0; p<=n/2; p++) {
			if (p > n-p-1 && n%2==0) break;   // exit when inword index is larger than backword index which means reaching the middle point will never happen in odd vector
			cout << ivec[p] + ivec[n-p-1] << endl;
	}

	// cout  << endl; 
	
	// // b2.
	vector<int>::size_type e = n - 1;
	for (unsigned s=0; s<=e; s++, e--) 
		cout << ivec[s] + ivec[e] << endl;  

	//answer a.
	for (decltype(ivec.size()) i=0; i<ivec.size()-1; i++) 		
		cout << ivec[i] + ivec[i+1] << endl; 

	//answer b.
	vector<int>::size_type start = 0;
	vector<int>::size_type end = n - 1;
	for (; start<=end; start++, end--) 
		cout << ivec[start] + ivec[end] << endl; 
	

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	const unsigned sz = 10;
	int arr1[sz];
	int arr2[sz];

	// a
	for (size_t k=0; k<sz; k++) 
		arr2[k] = k;

	// b
	vector<int> ivec1;
	vector<int> ivec2;
	for (size_t p=0; p<sz; p++)
		ivec1.push_back(p);

	// assign1
	// ivec2 = ivec1;

	// assign2
	for (vector<int>::iterator it=ivec1.begin(); it!=ivec1.end(); it++)
		ivec2.push_back(*it);

	// print1
	// for (auto i : ivec2)
	// cout << i << endl; 

	// print2
	for (auto it2=ivec2.begin(); it2!=ivec2.end(); it2++) 
		cout << *it2 << endl; 
	
		
	return 0;
}
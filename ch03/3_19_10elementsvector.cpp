#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintIVector(vector<int> v) {
	if (!v.empty())
		for (auto i : v) cout << i << " "; 
	else 
		cout << "empty"; 
    cout << endl;
}

int main(void) {
	// 1
	vector<int> ivec1 = {42,42,42,42,42,42,42,42,42,42};
	PrintIVector(ivec1);

	// 2
	vector<int> ivec2(10, 42);   //method 2 is the best.  succinct way for initializing a vector with a number of same elements
	PrintIVector(ivec2);

	// 3
	vector<int> ivec3{42,42,42,42,42,42,42,42,42,42}; 
	PrintIVector(ivec3);

	// 4
	vector<int> ivec4; 
	for (unsigned i=0; i<=9; i++) ivec4.push_back(42);
	PrintIVector(ivec4);

	//5
	vector<int> ivecc(10, 42); 
	vector<int> ivec5 = ivecc;
	PrintIVector(ivec5);

	return 0;
}
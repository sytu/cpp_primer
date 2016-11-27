#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> ivec(5,0);
	vector<int>::size_type cnt = ivec.size();	
	for (vector<int>::size_type ix=0; ix!=ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;

	for (auto i : ivec) 
		cout << i << " ";  // => 5 4 3 2 1  

	return 0;
}
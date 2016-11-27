#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int arr[] = {1,2,3};
	// vector<int> ivec(begin(arr), end(arr));
	vector<int> ivec(arr, arr+3);
	for (auto i : ivec) {
		cout << i << endl; 
	}
	return 0;
}
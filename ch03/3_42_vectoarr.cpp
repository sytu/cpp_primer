#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> ivec = {1,2,3};
	int arr[ivec.size()];

	// for (auto i=0; i!=ivec.size(); i++)
		// arr[i] = ivec[i];
	int i = 0;
	for (auto it=ivec.begin(); it!=ivec.end(); it++, i++)
		arr[i] = *it;

	for (auto j : arr) 
		cout << j << endl; 
		

	return 0;
}
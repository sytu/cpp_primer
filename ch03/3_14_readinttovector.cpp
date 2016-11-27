#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> ivec;
	int num;

	while (cin >> num) {
		ivec.push_back(num);
	}

	for (auto i : ivec) {
		cout << i << " "; 
	}

	cout << endl; 
	
	return 0;
}
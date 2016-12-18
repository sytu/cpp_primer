#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(void) {
	vector<int> ivec;
	const int sz = 10;   			 
	srand((unsigned) time (NULL));  
	// while
	decltype(ivec.size()) k = 0;
	while (k != sz) {
		ivec.push_back(rand() % 10);
		cout << ivec[k] << " ";
		++k; 
	}
	cout << endl; 
	// for 
	for (auto i=0; i != sz; ++i) {
		ivec.push_back(rand() % 10); 
		cout << ivec[k+i] << " ";       // 1th: 10+0=10 = the 11th element of ivec
	}
	/* => 
	7 4 6 3 1 1 3 5 2 4 
	3 0 6 0 7 3 2 9 5 9 
	*/ 
	cout << endl; 
	return 0;
}
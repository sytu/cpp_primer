#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> ivec;
	// ivec[0] = 42;  //illegal   ivec is am empty vector. cannot use index to access an element that doesn't exist
	// correction:
	ivec.push_back(42);

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> v = {10,11,12,13};
	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0) 
		cout << *++pbeg << " ";  // => 11 12 13 0   the program tried to dereference an inexist element, which accidently became 0 at here
		// cout << *pbeg++ << " ";  // =>  10 11 12 13
	return 0;
}
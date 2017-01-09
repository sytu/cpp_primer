#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::istream_iterator;

int main(void) {
	istream_iterator<int> in_iter(cin), eof;
	vector<int> ivec(in_iter, eof);

	fill_n(ivec.begin(), ivec.size(), 0);

	for (int i : ivec) 
		cout << i << " ";

	cout << endl;  
}
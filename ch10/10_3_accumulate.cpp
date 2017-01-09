#include <iostream>
#include <vector>
#include <numeric>


using std::cout; using std::cin; using std::endl; 
using std::vector; using std::istream_iterator;

int main(void) {
	istream_iterator<int> in_iter(cin), eof;
	vector<int> ivec(in_iter, eof);
	cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl; 
}
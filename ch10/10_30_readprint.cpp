#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::istream_iterator; using std::ostream_iterator;

int main(void) {
	istream_iterator<int> i_it(cin), eof;
	ostream_iterator<int> o_it(cout, " ");

	vector<int> iv(i_it, eof);

	sort(iv.begin(), iv.end());

	copy(iv.begin(), iv.end(), o_it);
}
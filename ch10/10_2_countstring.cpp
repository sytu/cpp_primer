#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::cout; using std::cin; using std::endl; 
using std::list; using std::istream_iterator; using std::string;

int main(void) {
	istream_iterator<string> in_iter(cin), eof;
	list<string> sli(in_iter, eof);
	cout << count(sli.cbegin(), sli.cend(), "hi") << endl; 
}
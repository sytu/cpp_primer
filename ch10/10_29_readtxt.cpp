#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#define file "/Users/sytu/workspace/c++/C++_Primer/ch10/i_10_29.txt"

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string; using std::ifstream; using std::istream_iterator;

int main(void) {
	ifstream ifs(file);
	istream_iterator<string> s_it(ifs), eof;
	// vector<string> sv(s_it, eof);
	vector<string> sv;
	while (s_it != eof) 
		sv.push_back(*s_it++);

	for_each(sv.begin(), sv.end(), [](string s) { cout << s << " "; });
	cout << endl; 
}
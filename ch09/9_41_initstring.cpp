#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;
int main(void) {
	// vector<char> cv = {'h', 'e', 'l', 'l', 'o'}; 	
	vector<char> cv{'h', 'e', 'l', 'l', 'o'}; 	
	string s(cv.begin(), cv.end());

	cout << s << endl; 
}
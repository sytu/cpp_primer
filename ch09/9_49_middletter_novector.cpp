#include <iostream>
#include <fstream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::cerr;
using std::ifstream;

void find_not_in(const string &curr, string &longest) {
	string ascender("bdfhijklt"), descender("gjpqy");
	if (curr.find_first_of(ascender) == string::npos && curr.find_first_of(descender) == string::npos) 
		longest = longest.size() < curr.size() ? curr : longest;	
}

int main(void) {
	ifstream ifs("/Users/sytu/workspace/c++/C++_Primer/ch09/i_9_49.txt");
	if (!ifs) {
		cerr << "No data?" << endl;
		return -1;
	}	
	string longest;
	for (string curr; ifs >> curr; )
		find_not_in(curr, longest);
	cout << longest << endl; 
}
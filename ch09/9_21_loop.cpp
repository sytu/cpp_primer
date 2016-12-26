#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;

int main(void) {
	string word;
	vector<string> svec;
	auto iter = svec.begin();
	while (cin >> word)
		iter = svec.insert(iter, word); 
	// two versions work in the same way 
}
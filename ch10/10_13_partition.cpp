#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using std::cout; using std::cin; using std::endl; 
using std::string; using std::vector;

void Print(vector<string>::iterator beg, vector<string>::iterator end) {
	for (; beg != end; )
		cout << *beg++ << endl; 
	cout << endl; 
}

inline bool moreThanFiveChar(const string &str) {
	return str.size() >= 5;
}

int main(void) {
	vector<string> words = {"HelloAreYouOk?", "hell", "morethanfive", "<5"};
	Print(words.begin(), words.end());

	auto par_after_iter = partition(words.begin(), words.end(), moreThanFiveChar);

	Print(words.begin(), par_after_iter);
}
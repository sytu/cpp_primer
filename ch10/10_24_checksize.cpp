#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>


using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;
using std::placeholders::_1; using std::bind;

bool checkSize(const string &s, string::size_type sz) {
	return s.size() < sz;
}

void biggies(const vector<int> &iv, const string &word) {
	auto found_iter = find_if(iv.begin(), iv.end(), bind(checkSize, word, _1));
	if (found_iter != iv.end())
		cout << found_iter - iv.begin() + 1  << "th " 
			 << "ELEM: " << *found_iter 
			 << " is larger than sz of " << word << ": " << word.size() << endl;  
	else 
		cout << "Not Found" << endl; 
}

int main(void) {
	string s = "hellomynameissytu";
	vector<int> iv;
	for (auto i=0; i!=20; ++i)
		fill_n(back_inserter(iv), 1, i);
	for (auto i : iv)
		cout << i << " "; 
	cout << endl; 
	biggies(iv, "hello");
	biggies(iv, s);
}
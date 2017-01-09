#include "make_plural.h"
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;

void Biggies(vector<string> &svec, vector<string>::size_type sz) {
	for_each(svec.begin(), svec.end(), 
		[](const string &s) { cout << s << " "; });
	cout << endl; 
	
	auto cnt = count_if(svec.begin(), svec.end(), 
		[sz](const string &s) { return s.size() > sz; });
	cout << cnt << " " << make_plural(cnt, "word", "s") 
	 	 << " of length " << sz << " or longer" << endl; 
}

int main(void) {
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};		
	Biggies(svec, 6);
	cout << endl; 	
}
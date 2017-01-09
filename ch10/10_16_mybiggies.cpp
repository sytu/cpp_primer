/*
	I: "the quick red fox jump over the slow red turtle"
	   
	O: Biggies(svec, 4); =>
		5 words of length 4 or longer 
		over slow jumps quick turtle 

	N: using stable_sort & find_if
*/
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;

inline string make_plural(size_t ctrl, const string &wd, const string &ending) {
	return ctrl > 1 ? wd + ending : wd;
}

void ElimDups(vector<string> &svec) {
	sort(svec.begin(), svec.end());
	auto uni_iter = unique(svec.begin(), svec.end());
	svec.erase(uni_iter, svec.end());
}

void Biggies(vector<string> &svec, vector<string>::size_type sz) {
	ElimDups(svec);
	stable_sort(svec.begin(), svec.end(), 
		[](const string &lhs, const string &rhs) { return lhs.size() < rhs.size(); });
	for_each(svec.begin(), svec.end(), 
		[](const string &s) { cout << s << " "; });
	cout << endl; 

	auto find_if_iter = find_if(svec.begin(), svec.end(), 
		[sz](const string &s) { return s.size() >= sz; });		
	auto cnt = svec.end() - find_if_iter;

	cout << cnt << " " << make_plural(cnt, "word", "s") 
	 	 << " of length " << sz << " or longer" << endl; 
	for_each(find_if_iter, svec.end(),
		[](const string &s) { cout << s << " "; });
	cout << endl; 	
}

int main(void) {
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};		
	Biggies(svec, 4);
	cout << endl; 	
}
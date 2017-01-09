/*
	I: "the quick red fox jump over the slow red turtle"
	   
	O: Biggies(svec, 4); =>
		5 words of length 4 or longer 
		over slow jumps quick turtle 

	N: using partition instead of using stable_sort & find_if
*/
#include "make_plural.h"
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;

void ElimDups(vector<string> &svec) {
	sort(svec.begin(), svec.end());
	auto uni_iter = unique(svec.begin(), svec.end());
	svec.erase(uni_iter, svec.end());
}

void Biggies(vector<string> &svec, vector<string>::size_type sz) {
	ElimDups(svec);
	for_each(svec.begin(), svec.end(), 
		[](const string &s) { cout << s << " "; });
	cout << endl; 
	
	auto par_iter = stable_partition(svec.begin(), svec.end(), 
		[sz](const string &s) { return s.size() >= sz; });		
	for_each(svec.begin(), svec.end(), 
		[](const string &s) { cout << s << " "; });
	cout << endl; 

	auto cnt = par_iter - svec.begin();
	cout << cnt << " " << make_plural(cnt, "word", "s") 
	 	 << " of length " << sz << " or longer" << endl; 
	for_each(svec.begin(), par_iter, 
		[](const string &s) { cout << s << " "; });
	cout << endl; 	
}

int main(void) {
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};		
	Biggies(svec, 4);
	cout << endl; 	
}
/*
	I: "the quick red fox jump over the slow red turtle"
	   
	O: Biggies(svec, 4); =>
		5 words of length 4 or longer 
		over slow jumps quick turtle 

	N: using bind+checkSize 
*/
#include "make_plural.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string; using std::ostream;
using std::placeholders::_1; using std::bind;

bool checkSize(const string &s, string::size_type sz) {
	return s.size() >= sz;
}

ostream &print(ostream &os, const string &s, char c) {
	return os << s << c;
}

void ElimDups(vector<string> &svec) {
	sort(svec.begin(), svec.end());
	auto uni_iter = unique(svec.begin(), svec.end());
	svec.erase(uni_iter, svec.end());
}

void Biggies(vector<string> &svec, vector<string>::size_type sz) {
	ElimDups(svec);
	for_each(svec.begin(), svec.end(), 
		bind(print, ref(cout), _1, ' '));
	cout << endl; 
	
	auto par_iter = partition(svec.begin(), svec.end(), 
		bind(checkSize, _1, sz));		
	for_each(svec.begin(), svec.end(), 
		bind(print, ref(cout), _1, ' '));
	cout << endl; 

	auto cnt = par_iter - svec.begin();
	cout << cnt << " " << make_plural(cnt, "word", "s") 
	 	 << " of length " << sz << " or longer" << endl; 
	for_each(svec.begin(), svec.end(), 
		bind(print, ref(cout), _1, ' '));
	cout << endl; 	
}

int main(void) {
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};		
	Biggies(svec, 4);
	cout << endl; 	
}
/*
	I: the quick red fox jump over the slow red turtle
	O: fox jump over quick red slow the turtle
*/
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;

inline void Print(const vector<string> &v) {
	for (auto i : v) 
		cout << i << " "; 
	cout << endl; 
}

bool isShorter(const string& s1, const string &s2) {
	return s1.size() < s2.size();
}

void ElimDups(vector<string> &sv) {
	sort(sv.begin(), sv.end());
	auto uni_end_iter = unique(sv.begin(), sv.end());
	sv.erase(uni_end_iter, sv.end());	
	stable_sort(sv.begin(), sv.end(), isShorter);
}

int main(void) {
	vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};		
	ElimDups(svec);
	Print(svec);
}
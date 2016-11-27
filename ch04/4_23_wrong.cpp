#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	string s ="word";
	// string p1 = s + s[s.size() - 1] == 's' ? "" : "s"; 
	// 1. -
	// 1. +
	// 3. ==
	// 4. ?
	// 5. =
	// correction:
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s"); 
	// cout << p1 << endl; 
	return 0;
}
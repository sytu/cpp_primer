#include <iostream>
#include <string>
using namespace std;

void cmpString(string s1, string s2) {
	string answer = s1==s2 ? "Equal" : (s1>s2 ? s1 : s2);
	cout << answer << endl; 
}

void cmpStringLength(string s1, string s2) {
	string answer = s1.size()==s2.size() ? "Equal length" : (s1.size()>s2.size() ? s1 : s2);
	cout << answer << endl; 
}

int main(void) {
	string s1 = "hiwww";
	string s2 = "hiaaaaaaaa";
	// cmpString(s1, s2);
	cmpStringLength(s1, s2);
	return 0;
}
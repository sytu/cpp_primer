#include <iostream>
#include <string>
using namespace std;

bool hasUpper(const string &s) {
	for (char c : s) 
		if (isupper(c)) return true;
	return false;
}

void toUpper(string &s) {
	for (char &c : s)
		c = toupper(c);
}

int main(void) {
	string str = "hello";
	cout << (hasUpper(str) ? "has upper char" : "no upper char") << endl; 
	toUpper(str);
	cout << str << endl; 
	return 0;
}
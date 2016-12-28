#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; 

// using replace
void ReplaceString(string &str, const string &oldVal, const string &newVal) {
	unsigned osz = oldVal.size();
	for (size_t i=0; i<=str.size()-osz;) {
		if (str[i] == oldVal[0] && str.substr(i, osz) == oldVal) {
			str.replace(i, osz, newVal);
			i += newVal.size();
		} else {
			++i;
		}
	}
}

int main(void) {
	string s = "hi my name is hi world hi";  // => "hello my name is hello world hello"
	string os = "hi";
	string ns = "hello";
	ReplaceString(s, os, ns);
	cout << s << endl; 
}
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; 

// without using iterator
// void ReplaceString(string &str, const string &oldVal, const string &newVal) {
// 	unsigned osz = oldVal.size();
// 	for (unsigned i=0; i<=str.size()-osz;) {
// 		if (str[i] == oldVal[0] && str.substr(i, osz) == oldVal) {
// 			str.erase(i, osz).insert(i, newVal);
// 			i += newVal.size();
// 		} else {
// 			 ++i;
// 		}
// 	}
// }

// using iterator
void ReplaceString(string &str, const string &oldVal, const string &newVal) {
	unsigned osz = oldVal.size();
	for (auto scurr=str.begin(); scurr<=str.end()-osz;) {
		if (oldVal == string{scurr, scurr + osz}) {
			str.erase(scurr, scurr + osz);
			str.insert(scurr, newVal.begin(), newVal.end());
			scurr += newVal.size();
		} else {
			++scurr;
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
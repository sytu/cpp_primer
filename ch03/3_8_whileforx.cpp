#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	while (getline(cin, str) && str!="exit") {
		// while
		// string::size_type n = 0;
		// while (n < str.size()) {
		// 	if (!isspace(str[n])) str[n] = 'X';
		// 	++n;
		// }
		
		// for
		string::size_type n = 0;
		for (; n < str.size(); n++) if (!isspace(str[n])) str[n] = 'X';
		cout << str << endl; 
	}

	return 0;
}
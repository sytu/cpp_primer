// ispunct(c) 是标点符号时为真
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	string result;
	while (getline(cin, str) && str!="exit") {
		result = "";
		for (char &c : str) {
			if (!ispunct(c)) result += c;
		}
		cout << result << endl; 
	}
	return 0;
}
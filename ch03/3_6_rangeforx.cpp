#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	while (getline(cin, str) && str!="exit") {
		for (auto &c : str) {
			if (!isspace(c)) c = 'X';
			// c = 'x';
		}
		cout << str << endl; 
	}

	return 0;
}
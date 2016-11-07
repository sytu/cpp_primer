#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string line;
	string word;

	// while (getline(cin, line)) {
	// 	cout << line << endl; 
	// }

	while (cin >> word) {
		cout << word << endl; 
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string word, preword;
	while (cin >> word) {
		if (!isupper(word[0])) {
			preword = "";
			continue;
		}
		if (word == preword) break; else preword = word;
	}
	
	if (cin.eof())  cout << "no word was repeated." << endl;  // end of line : ctrl+d(unix)
	else            cout << word << " occurs twice in succession." << endl;
	return 0;
}

//fixed @error: He he He => He 
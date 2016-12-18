// how now now now brown cow cow => now: 3
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<string> svec;
	string word, tmpWord, maxWord;
	unsigned cnt = 1, maxCnt = 1;

	while (cin >> word && word != "exit") 
		svec.push_back(word);

	vector<string>::iterator start = svec.begin()+1;
	vector<string>::iterator end = svec.end();

	while (start != end) {
		if (*start == *(start-1)) {
			++cnt;
			tmpWord = *start;
			if (maxCnt < cnt) {
				maxCnt = cnt;
				maxWord = tmpWord;
			}
		}
		else if (*start!=*(start-1) && *start!="\0") {
			cnt = 1;
			tmpWord = *start;
		}
		++start;
	}

	if (maxCnt == 1)
		cout << "No consecutive word." << endl << endl;  
	else
		cout << maxWord << ": " << maxCnt << endl << endl; 

	return 0;
}
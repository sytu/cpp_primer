#include <iostream>
using namespace std;

int main(void) {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spaceCnt = 0, tabCnt = 0, nLineCnt = 0;
	char ch;

	while (cin >> std::noskipws >> ch && ch != '0') {
		switch(ch) {
			case 'a': case 'A':
				++aCnt;
				break;
			case 'e': case 'E':
				++eCnt;
				break;
			case 'i': case 'I':
				++iCnt;
				break;
			case 'o': case 'O':
				++oCnt;
				break;
			case 'u': case 'U':
				++uCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++nLineCnt;
				break;
			case '\40':  // or case ' ':
				++spaceCnt;
				break;
		}
	}

	cout << "Number of vowel a: \t" << aCnt << '\n'
		 << "Number of vowel e: \t" << eCnt << '\n'
		 << "Number of vowel i: \t" << iCnt << '\n'
		 << "Number of vowel o: \t" << oCnt << '\n'
		 << "Number of vowel u: \t" << uCnt << '\n'
		 << "Number of space: \t" << spaceCnt << '\n'
		 << "Number of tab: \t\t" << tabCnt << '\n'
		 << "Number of new line: \t" << nLineCnt << '\n'
		 << endl; 
	return 0;
}
#include <iostream>
using namespace std;

int main(void) {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;

	while (cin >> ch && ch != '0') {
		if (ch == 'a') { 
			++aCnt;
			continue;
		}
		if (ch == 'e') { 
			++eCnt;
			continue;
		}
		if (ch == 'i') { 
			++iCnt;
			continue;
		}
		if (ch == 'o') { 
			++oCnt;
			continue;
		}
		if (ch == 'u') { 
			++uCnt;
			continue;
		}
	}

	cout << "Number of vowel a: \t" << aCnt << '\n'
		 << "Number of vowel e: \t" << eCnt << '\n'
		 << "Number of vowel i: \t" << iCnt << '\n'
		 << "Number of vowel o: \t" << oCnt << '\n'
		 << "Number of vowel u: \t" << uCnt << '\n'
		 << endl; 

	return 0;
}

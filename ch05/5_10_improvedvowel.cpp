#include <iostream>
#include <cctype>
using namespace std;

int main(void) {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;

	// 1
	// while (cin >> ch && ch != '0') {
	// 	switch(ch) {
	// 		case 'a': case 'A':
	// 			++aCnt;
	// 			break;
	// 		case 'e': case 'E':
	// 			++eCnt;
	// 			break;
	// 		case 'i': case 'I':
	// 			++iCnt;
	// 			break;
	// 		case 'o': case 'O':
	// 			++oCnt;
	// 			break;
	// 		case 'u': case 'U':
	// 			++uCnt;
	// 			break;
	// 	}
	// }

	// 2
	// require #include <cctype> for tolower()
	while (cin >> ch && ch != '0') {
		switch(tolower(ch)) {
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
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
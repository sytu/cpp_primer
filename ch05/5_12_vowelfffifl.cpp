#include <iostream>
using namespace std;

int main(void) {
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch1, ch2;  	   // for method 1
	char ch, prech = '\0'; // for method 2    prech = previous char

	// 1
	// while (cin >> noskipws >> ch1 && ch1 != '0') {
	// 	switch(ch1) {
	// 		case 'f':
	// 			cin >> noskipws >> ch2;
	// 			switch(ch2) {
	// 				case 'f':
	// 					++ffCnt;
	// 					break;
	// 				case 'l':
	// 					++flCnt;
	// 					break;
	// 				case 'i':
	// 					++fiCnt;
	// 					break;
	// 			}
	// 			break;
	// 	}
	// }

	// 2
	while (cin >> noskipws >> ch && ch != '0') {
		switch(ch) {
			case 'f':case 'F':
				if (prech == 'f' || prech == 'F') ++ffCnt;
				break;
			case 'i': case 'I':
				if (prech == 'f' || prech == 'F') ++fiCnt;
				break;
			case 'l': case 'L':
				if (prech == 'f' || prech == 'F') ++flCnt;
				break;
		}
		prech = ch;
	}


	cout << "Number of ff: \t" << ffCnt << '\n'
		 << "Number of fl: \t" << flCnt << '\n'
		 << "Number of fi: \t" << fiCnt << '\n'
		 << endl; 
	return 0;
}
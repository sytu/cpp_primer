#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	string final[] = {"Bad", "NotThatBad", "Soso", "Good", "Awesome", "Perfect"}; // 50, 60, 70, 80, 90, 100
	int grade;
	string lettergrade;

	// 1
	while (cin >> grade) {
		if (grade >=0 && grade <= 100) {
			if (grade < 60) {
				lettergrade = final[0];
				cout << lettergrade << endl; 
				continue;
			}
			lettergrade = final[(grade - 50) / 10];
			if (grade != 100) {
				if (grade % 10 > 7) 
					lettergrade += '+';
				if (grade % 10 < 3)
					lettergrade += '-'; 
			}
			cout << lettergrade << endl; 
		} else 
			cout << "Out of range." << endl; 
	}

	// 2
	// while (cin >> grade) {
	// 	if (grade < 60) {
	// 		lettergrade = final[0];
	// 		cout << lettergrade << endl; 
	// 		continue;
	// 	} else {
	// 		lettergrade = final[(grade - 50) / 10];
	// 		if (grade != 100) {
	// 			if (grade % 10 > 7) 
	// 				lettergrade += '+';
	// 			if (grade % 10 < 3)
	// 				lettergrade += '-'; 
	// 		}
	// 			cout << lettergrade << endl; 
	// 	}
	// }

	return 0;
}
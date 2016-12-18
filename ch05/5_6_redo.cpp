#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	string final[] = {"Bad", "NotThatBad", "Soso", "Good", "Awesome", "Perfect"}; // 50, 60, 70, 80, 90, 100
	int grade;
	string lettergrade;

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

	while (cin >> grade) {
		lettergrade = (grade < 60) ? final[0] : final[(grade - 50) / 10];
		lettergrade += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
		cout << lettergrade << endl; 
	}


	return 0;
}
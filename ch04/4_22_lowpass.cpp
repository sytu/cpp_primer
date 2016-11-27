#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	unsigned grade;
	string level;
	cout << "Enter the grade or exit to quit:" << endl; 

	// 1
	// while (cin >> grade){
	// 	level = grade > 90 ? "high pass!" 
	// 			   		   : grade > 75 ? "pass"
	// 			   					    : grade > 60 ? "low pass..."
	// 			   								     : "fail."; 
	// 	cout << level << endl; 
	// }

	// 2
	// while (cin >> grade){
	// 	if (grade > 90) {
	// 		cout << "high pass!" << endl; 
	// 		continue;
	// 	}
	// 	else if (grade > 75) {
	// 		cout << "pass" << endl; 
	// 		continue;
	// 	}
	// 	else if (grade > 60) {
	// 		cout << "low pass..." << endl; 
	// 		continue;
	// 	}
	// 	else cout << "fail." << endl; 
	// }	

	// 3
	while (cin >> grade){
		if (grade > 90) 
			level = "high pass!";
		else {
			if (grade > 75) 
				level = "pass";
			else {
				if (grade > 60) 
					level = "low pass...";
				else 
					level = "fail.";
			}

		}
		cout << level << endl; 
	}
	return 0;
}
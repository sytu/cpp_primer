#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	string all;

	// while (cin >> str && str!="exit") {
	// 	all += str;
	// }
	while (cin >> str && str!="exit") {
		all += str + ' ';
	}

	cout << all << endl; 
	

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	unsigned scores[11];   // without initialization, the value of the element within the array scores will be unsure, which measn the value of each element cannot be predicted
	// unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade/10];
		}
	}

	for (auto i : scores) 
		cout << i << endl; 
		
	return 0;
}
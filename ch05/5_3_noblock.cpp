#include <iostream>
using namespace std;

int main(void) {
	int sum = 0, val = 1;
	// 1
	// while (val <= 10) 
	// 	sum += val++;

	// 2
	while (val <= 10) 
		sum += val, ++val;

	cout << "Sum of 1 to 10 inclusive is " 
		 << sum << endl; 

	// This rewritten version diminishes the readability. 
	return 0;
}
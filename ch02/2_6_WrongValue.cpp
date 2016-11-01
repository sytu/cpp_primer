#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int num1 = 9;
	int num2 = 7;
	cout << num1 << endl;  // => 9 
	cout << num2 << endl;  // => 7
	// int numA = 09;  //invalid digit '9' in octal constant
	int numB = 07;
	// cout << numA << endl;
	cout << numB << endl;  // => 7 
	return 0;
}
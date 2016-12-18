#include <iostream>
using namespace std;

int compare(const int num1, const int *p) {
	return (num1 > *p) ? num1 : *p;
}
int main(void) {
	for (int num1, num2; cout << "Enter num1: " << endl, cin >> num1, cout << "Enter num2: " << endl, cin >> num2; ) 
		cout << endl << compare(num1, &num2) << endl << endl; 
		// cout << (compare(num1, &num2) ? "num1 is larger." : "num2 is larger.") << endl << endl; 

	return 0;
}
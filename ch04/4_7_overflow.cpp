#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int a = INT_MAX + 1;
	cout << a << endl; // => -2147483648 
	
	int b = a * 100;
	cout << b << endl; // => 0

	short c = INT_MIN;
	cout << c << endl; // => 0 

	return 0;
}
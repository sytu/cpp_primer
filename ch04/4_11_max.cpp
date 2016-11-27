#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int a, b, c, d;

	cout << "Enter the value of a, b, c and d:" << endl; 
	
	while (cin >> a >> b >> c >> d) {
		// cout << a << endl; 
		// cout << b << endl; 
		// cout << c << endl; 
		// cout << d << endl; 
		
		if (a > b && b > c && c > d)
			cout << "yes! a > b > c > d" << endl; 
		else 
			cout << "nope!" << endl; 
	}

	return 0;
}
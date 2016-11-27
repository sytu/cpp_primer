#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	// a
	int i;
	double d;
	d = i = 3.5;
	cout << "i: " << i <<endl; // => 3 
	cout << "d: " << d << endl; // => 3
	
	d = i = 0;
	// b
	i = d = 3.5;
	cout << "i: " << i <<endl; // => 3 
	cout << "d: " << d << endl; // => 3.5 

	return 0;
}
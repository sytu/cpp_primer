#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	//a.
	r2 = 3.14159;
	cout << d << endl; // => 3.14159

	//b.
	r2 = r1;  //the new binding will fail
	r1 = 100;  //testing
	cout << d << endl; // => 0
	cout << r2 << endl; // => 0 
	cout << i << endl;  // => 100 
	cout << r1 << endl; // => 100 
	r1 = 0;  //set back

	//c.
	r2 = 3.13l;
	i = r2;
	cout << i << endl; // => 3
	r2 = 100;
	cout << d << endl;  // => 100 
	cout << i << endl;  // => 3 
	r1 = 0;
	r2 = 0;

	//d.
	r1 = 100;
	// r2 = 0;
	r1 = d;
	cout << r1 << endl;  // => 0
	d = 1000;
	cout << r1 << endl;  // => 0
	cout << i << endl;   // => 0 
	

	

	return 0;
}
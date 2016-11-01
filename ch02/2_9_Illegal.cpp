#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	//a.
	// cin >> int input_value; //error: expected '(' for function-style cast or type construction. This is because the left side of the input operator >> need the name of a variable not an initialization of a variable
	//correction:
	int input_value;
	cin >> input_value;

	//b.
	// int i  = {3.14};
	// cout << i << endl; //error: type 'double' cannot be narrowed to 'int' in initializer list
	//correction:
	double d = {3.14};
	cout << d << endl; // => 3.14 

	//c.
	// double salary = wage = 9999.99;  //error: use of undeclared identifier 'wage'
	//correction:
	double salary, wage;
	salary = wage = 9999.99;   
	cout << salary << endl; // => 9999.99
	cout << wage << endl; // => 9999.99
	return 0;

	//d.
	// int i = 3.14;  // warning: implicit conversion from 'double' to 'int' changes value from 3.14 to 3
	//correction:
	double i2 = 3.14;
	cout << i2 << endl; //3.14
	
}
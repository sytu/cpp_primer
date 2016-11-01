#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int ival1 = 100;
	int ival2 = 250;
	int * ptr = &ival1;
	ptr = &ival2;  //change the value of a pointer
	cout << *ptr << endl; // => 250 
	*ptr = 2500;   //change the value of a variable that is pointed by a pointer. The variable here is ival2.
	cout << ival2 << endl; // => 2500 
	return 0;
}
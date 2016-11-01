#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int i = 42;  //define a variable i and initialize it with an integer 42
	int *p1 = &i; //defien a pointer p1 that points to an integer object and initialize pointer p1 with the address of variable i
	*p1 = *p1 * *p1; //assign the product of the object that is pointed by the pointer p1 multiple itself as value to the object that is pointed by the pointer p1
					// this will create the same effect as i *= i  or i = i * i
	cout << *p1 << endl;   // => 1764 
	
	return 0;
}
#include <iostream>
using namespace std;

void f() {
	cout << "void" << endl; 
}
void f(int i) {
	cout << "int" << endl; 
}
void f(int i1, int i2) {
	cout << "int, int" << endl; 
}
void f(double d) {
	cout << "double" << endl; 
}
void f(double d1, double d2) {
	cout << "double, double" << endl; 
}



int main(void) {
	// f(2.56, 42);  // error: call to 'f' is ambiguous
	f(42);   	  // =>  int
	f(42, 0);	  // => int, int 
	f(2.56, 3.14);// => double double
	return 0;
}
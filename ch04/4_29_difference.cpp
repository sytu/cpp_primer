#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int x[10];
	int *p = x;

	cout << sizeof(x) << endl; // => 40    4 * 10  space used by array x
	cout << sizeof(*x) << endl; // => 4    sizeof(*x) returns space used by the first element of array x
	cout << sizeof(x) / sizeof(*x) << endl;  // => 10   the expression returns the number of elements in x. 

	cout << sizeof(p) << endl; // => 8    the space used by pointer p
	cout << sizeof(*p) << endl;  // => 4   the space used by the object taht p points to, which is the first element of array x
	cout << sizeof(p) / sizeof(*p) << endl; // => 2 

	return 0;
}
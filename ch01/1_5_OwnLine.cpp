#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// using namespace std; 

int main(void) {
	int a = 0, 
		b = 0;
		
	cout << "Give me two number: ";
	cout << endl;
	cin >> a >> b;

	cout << "The product of " ;
	cout << a;
	cout << " and ";
	cout << b ;
	cout << " is " ;
	cout << a * b;
	cout << "." ;
	cout << endl;

	return 0;
}
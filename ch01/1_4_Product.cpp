#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// using namespace std; 

int main(void) {
	int a = 0, 
		b = 0;
		
	cout << "Give me two number: " << endl;
	cin >> a >> b;
	cout << "The product of " << a << " and " << b 
			  << " is " << a * b << "." << endl;

	return 0;
}
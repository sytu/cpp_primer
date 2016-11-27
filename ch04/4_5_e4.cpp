#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	//a.
	cout << -30 * 3 + 21 / 5 << endl;   // =>  -86
	//b.
	cout << -30 + 3 * 21 / 5 << endl;   // =>  -18
	//c.
	cout << 30 / 3 * 21 % 5 << endl;	// =>  0
	//d.
	cout << -30 / 3 * 21 % 4 << endl; 	// => -2 

	return 0;
}
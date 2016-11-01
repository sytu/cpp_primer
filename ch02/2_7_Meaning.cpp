#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
	string str = "Who goes with F\145rgus?\012";  // =>  Who goes with Fergus?\n    \145 = character e   \012 = \n
	cout << str << endl;
	cout << 3.14e1L << endl;   // => 31.4  (3.14*10^1)
	// cout << 1024f << endl;  //invalid digit 'f' in decimal constant because postfix f directly follows an int number
	cout << 1024.f << endl;  // => 1024  type: float
	cout << 3.14L << endl;     // => 3.14 type: long double
	
	return 0;
}
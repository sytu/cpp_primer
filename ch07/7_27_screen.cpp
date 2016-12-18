#include "Screen.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	Screen myScreen(5,5,'X');
	myScreen.display(cout);
	cout << '\n';
	myScreen.move(4,0).set('#').display(cout);
	cout << '\n';
	myScreen.display(cout);
	cout << '\n';
}
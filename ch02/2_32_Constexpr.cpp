#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	// int null = 0, *p = null;  //illegal pointer cannot be initialized with the value of a variable.
	//correction:
	int null = 0, *p = &null;  	
	// int null2 = 0, *p2 = nullptr;

	return 0;
}
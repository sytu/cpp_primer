#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int v1 = 10;
	int v2 = 5;
	int *p1 = &v1;	
	int *p2 = &v2;	

	// cout << p1 + p2 << endl;  //error: invalid operands to binary expression ('int *' and 'int *')
	// the value of a pointer is an address. adding two address together is nonsense and useless.
	// the operation isn't defined
	

	return 0;
}
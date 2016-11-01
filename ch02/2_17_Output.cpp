#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri << endl; // => 10 10  
	return 0;
}
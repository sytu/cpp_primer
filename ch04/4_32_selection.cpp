#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int x = 1;
	int y = 9;

	(1 > 0) ? ++x, ++y : --x, --y;

	cout << x << endl; // => 2 
	cout << y << endl; // => 9 

	return 0;
}
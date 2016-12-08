#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int i = 10;
	double d = 3.14;

	i *= static_cast<int>(d);

	cout << i << endl;  // => 30 

	return 0;
}
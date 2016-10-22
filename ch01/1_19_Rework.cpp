#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int a, b;

	cout << "Enter two integer: " << endl;
	cin >> a >> b;

	if (a > b) {
		while (a >= b) {
			cout << a-- << " ";
		}
	} else {
		while (a <= b) {
			cout << b-- << " ";
		}
	} 

	cout << endl;

	return 0;
}


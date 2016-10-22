#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int sum = 0,
		k;

	cout << "Enter integers to add up and ctrl+d to stop: " << endl;

	for (; cin >> k;) {
		sum += k;
	}

	cout << endl << "SUM: "
		 <<sum << endl;

	return 0;
}
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	//1_9
	int sum = 0,
		start = 50,
		end = 100;
	for (int k = start; k <= end; k++) {
		sum += k;
	}
	cout << "1_9_SUM:" << endl << sum << endl << endl;

	//1_10
	cout << "1_10_Print10To0: " << endl;
	for (int p = 10; p >= 0; p--) {
		cout << p << " ";
	}
	cout << endl << endl;

	//1_11
	int a, b;
	cout << "1_11_TwoNum: " << endl << "Enter two integer: " << endl;
	cin >> a >> b;
	if (a > b) {
		for (; a >= b; a--) {
			cout << a << " ";
		}
	} else {
		for (; a <= b; a++) {
			cout << a << " ";
		} 
	} 
	cout << endl << endl;

	return 0;
}

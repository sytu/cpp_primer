#include <iostream>
using namespace std;

long long fact(long long n) {
	return n > 1 ? n * fact(n - 1) : 1;
}

int main(void) {
	const string prompt = "Enter a number and return you its factorial: ";
	const string range = "(The number need to bigger than 0 and smaller than 20)";
	for (long long input = 0;cout << prompt << endl, cout << range << endl, cin >> input; ) {
		if (input < 0 || input > 20) {
			cout << "Out of range." << endl; 
			continue;
		}
		cout << fact(input) << endl; 
	}

	return 0;
}
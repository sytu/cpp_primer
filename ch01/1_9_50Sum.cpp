#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int sum = 0,
		start = 50,
		end = 100;


	while(start <= end) {
		sum += start;
		start ++;
	}

	cout << "SUM:" << sum << endl;


	return 0;
}
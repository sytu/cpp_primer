#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int stop = 42;
	int num;

	while (cin >> num && num != stop) {}

	// while (cin >> num) {
	// 	if (num == stop)
	// 		break;
	// }

	return 0;
}
#include <iostream>
using namespace std;

void reset(int &num) {
	num = 10;
}

int main(void) {
	int num = 1000000;
	reset(num);
	cout << num << endl;  // => 10 
	return 0;
}
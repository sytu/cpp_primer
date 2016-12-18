#include <iostream>
using namespace std;

void swap(int &x,int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main(void) {
	int a = 10, b = 20;
	cout << "Originally, a = " << a << ", b = " << b << endl; 	
	swap(a, b);
	cout << "After swap(), a = " << a << ", b = " << b << endl; 
	return 0;
}
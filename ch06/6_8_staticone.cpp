#include <iostream>
using namespace std;
int addOne() {
	static int ret;
	return ++ret;
}
int main(void) {
	cout << addOne() << endl; 
	cout << addOne() << endl; 
	cout << addOne() << endl; 

	return 0;
}
#include <iostream>
using std::cout; using std::cin; using std::endl; 

int main(void) {
	auto sum = [](int a, int b) { return a + b; };
	cout << sum(10,20) << endl; // => 30 
}
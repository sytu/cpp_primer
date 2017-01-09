#include <iostream>
using std::cout; using std::cin; using std::endl; 

void add(int a) {
	auto sum = [a](int b) { return a + b;};
	cout <<  sum(6) << endl; 
}

int main(void) {
	add(10); 
	add(4);
}
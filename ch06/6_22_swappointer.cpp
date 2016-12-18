#include <iostream>
using namespace std;

void swapPtr(int *&p1, int *&p2) {
	int * tmpptr = p1;
	p1 = p2;
	p2 = tmpptr;
}

int main(void) {
	int i1 = 10;
	int i2 = 20;
	int *p1, *p2;
	p1 = &i1;
	p2 = &i2;

	cout << p1 << endl; 
	cout << p2 << endl; 
	cout << *p1 << endl; 
	cout << *p2 << endl; 
	cout << endl; 
	swap(p1, p2);
	cout << p1 << endl; 
	cout << p2 << endl; 
	cout << *p1 << endl; 
	cout << *p2 << endl; 


	return 0;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// using abs()  floating number include cmath, other number include cstdlib or complex. or just <iostream> for simple usage
int abs(int n) {
	return abs(n);
}

// using string
int abs1(int n) {
	string str = to_string(n);
	return n < 0 ? stoi(str.substr(1, str.size())) : stoi(str.substr(0, str.size()));
}

// using 0
int abs2(int n) {
	return n < 0 ? 0 - n : n;
}

// simply add - unitary operator
int abs3(int n) {
	return n < 0 ? -n : n;
}

// square root sqrt() in math.h need #include <cmath>
int abs4(int n) {
	return sqrt(n * n);
}



int main(void) {
	int n1 = 100;
	int n2 = -20;
	
	cout << abs1(n1) << endl; 
	cout << abs1(n2) << endl; 
	cout << abs2(n1) << endl; 
	cout << abs2(n2) << endl; 
	cout << abs3(n1) << endl; 
	cout << abs3(n2) << endl; 
	cout << abs4(n1) << endl; 
	cout << abs4(n2) << endl; 
	cout << abs5(n1) << endl; 
	cout << abs5(n2) << endl; 
	return 0;
}
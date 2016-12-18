#include <iostream>
#include <vector>
using namespace std;

int func(int, int);

int Add(const int a, const int b) { return a + b; }

int Subtract(const int a, const int b) { return a - b; }

int Multiply(const int a, const int b) { return a * b; }

int Divide(const int a, const int b) { return a / b; }

int main(void) {
	vector<decltype(func)*> pvec = {Add, Subtract, Multiply, Divide};
	for (auto p : pvec)
		cout << p(10,5) << " ";  // => 15 5 50 2 
	cout << endl;  
	return 0;
}
#include <iostream>
using namespace std;


int fact(int n) {
	return n == 1 ? 1 : n * fact1(n - 1);
}
int fact2(int n) {
	int ret = 1;
	while (n != 1)
		ret *= n--;
	return ret;
}


int main(void) {
	int n = 5;
    cout << boolalpha << (120 == fact2(5)) << endl; // => true 
    cout << boolalpha << (fact1(5) == fact2(5)) << endl; // => true 

	return 0;
}
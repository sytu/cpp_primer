#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i) {
		sum += i;    //10*(9+0)/2
	}
	cout << i << " " <<sum << endl; // => 100 45     the var i  at here is the outside var i not the i defined inside the for loop. Due to block scope, the i of the for loop cannot be used outside
	
	return 0;
}
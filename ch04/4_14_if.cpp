#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int i = 4;
 
	// if (42 = i) cout << "haa" << endl; // error: expression is not assignable   the value on the left side of an assignment operator must be a lval
	if (i = 42) cout << "haa" << endl;  // warning: using the result of an assignment as a condition without parentheses
	// check the value of i, which will be 42 after assignment    assignment always makes the if statement to be true

	return 0;
}
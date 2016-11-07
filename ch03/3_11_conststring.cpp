#include <iostream>
#include <string>
using namespace std;

int main(void) {
	const string s = "Keep out!";
	for (auto &c : s) {   //the for loop is legal when the value of reference c is not going to be changed because the type of c is const char &, which is a reference that binds with a char constant
		cout << c << endl; //legal
		// c = "x";  //illegal
	}
	// Therefore, whether the loop is legal or not depending on the code within for loop body
	return 0;
}
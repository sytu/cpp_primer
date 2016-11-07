#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	cout << s[0] << endl;   // it wants to print the first index of an empty string. obviously, it's illegal because the first index of an empty string doesn't exist.
	return 0;
}
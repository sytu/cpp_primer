#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
	string s1("2\x4d\012"); //s1 is initialized through a string literal
	cout << s1 << endl; 
	string s2 = "2\t\115\n";  //cpy the value of a string literal to a string object
	cout << s2 << endl; 
	return 0;
}
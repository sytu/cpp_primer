#include <iostream>
#include <string>
using namespace std;

// return invalid reference of a local variable
string & getString() {
	string str = "local string";
	return str;  // warning: reference to stack memory associated with local variable 'str' returned 
}
// return invalid constant reference when we want alter the value of the object that function return 
const string & getString2(string &str) {
	str += "ten";
	return str;  // warning: reference to stack memory associated with local variable 'str' returned 
}

int main(void) {
	string s = getString();
	cout << s << endl;   // => local s? ?y? 

	string s2 = "add";  
	getString2(s2) += "10";  // error: no viable overloaded '+='
	return 0;
}
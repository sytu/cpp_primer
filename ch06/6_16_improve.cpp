#include <iostream>
#include <string>
using namespace std;


bool isEmpty(string &s) { // this function is misleading and can't be used with const string or in a const function.
	return s.empty();
}
bool isEmptyImproved(const string &s) {
	return s.empty();
}
int main(void) {
	string s1 = "hs";
	const string s2 = "hs";
	bool test1 = isEmpty(s1); // correct but limited
	// bool test2 = isEmpty(s2);  // error occurs because the formal parameter string &s can only take non-constant string as arguments
	// bool test3 = isEmpty("hi");  // error occurs because the formal parameter string &s can only take non-constant string as arguments

	// improved
	bool testi1 = isEmptyImproved(s1);  // improved version can take non-constant string as argument
	bool testi2 = isEmptyImproved(s2);  // improved version can take constant string as argument
	bool testi3 = isEmptyImproved("hi");  // improved version can take string literal as argument
	return 0;
}
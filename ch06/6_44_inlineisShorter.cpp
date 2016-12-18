#include <iostream>
//#include <vector>
//#include <string>
using namespace std;

inline bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

int main(void) {
	if (isShorter("aha", "papa")) cout << "Yes" << endl; 
	else 						  cout << "No" << endl; 
	return 0;
}
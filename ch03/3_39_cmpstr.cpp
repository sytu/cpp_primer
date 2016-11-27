#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	string s1 = "b";
	string s2 = "a is smaller";
	if (s1 > s2) cout << "s1 is bigger" << endl; 
	
	char cs1[] = "same string";
	char cs2[] = "same string but one.";
	if (strcmp(cs2, cs1) > 0) cout << "cs2 is bigger" << endl; 

	return 0;
}
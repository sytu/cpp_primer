#include <iostream>
#include <vector>
#include <string>
using namespace std;

string sa[10]; // a array of 10 elements of ""  empty string
int ia[10];    // a array of 10 elements of 0
int main(void) {
	string sa2[10]; // a array of 10 elements of ""  empty string
	int ia2[10]; // a array of 10 elements of uninitialized value  empty string

	// for (auto s : sa2)
		// cout << s << endl; 
		
	for (auto i : ia2)
		cout << i << endl;   // enough the output is 0 in each line 

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	const char *cp = "Hello Word";
	cout << *cp << endl;  // => H   char type
	cout << cp << endl;   // => Hello Word a string

	if (cp && *cp) cout << "aa" << endl; // => aa
	// 1. check if the pointer cp is valid. 
	// 2. if cp is not valid, the if statement is unsatified. 
	// 3. if cp is valid, which means the pointer cp points to an actual address in the memory, get the object that cp points to and check if the object is an empty char '\0'
	// 4. if the object is not an empty char, the if statement is satisfied.
	// 5. if not, the if statement is unsatified. 
	
	return 0;
}
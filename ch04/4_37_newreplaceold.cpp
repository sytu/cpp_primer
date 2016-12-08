#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int i; double d; const string *ps; char *pc; void *pv;

	// a
	// old
	pv = (void*) ps;
	// new
	pv = const_cast<string*>(ps);
	//or
	pv = static_cast<void*>(const_cast<string*>(ps));

	// b
	// old
	i = int (*pc);	
	// new
	i = static_cast<int>(*pc);

	// c
	// old
	pv = &d;
	// new
	pv = static_cast<void*>(&d);

	// d
	// old
	pc = (char*) pv;
	// new
	pc = static_cast<char*>(pv);
	// or
	pc = reinterpret_cast<char*>(pv);

	return 0;
}
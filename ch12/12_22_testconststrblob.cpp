#include <iostream>

using namespace std;

#include "12_22_ConstStrBlob.h"

int main(void) {
	const StrBlob csb{"hello", "world"};
	// ConstStrBlob
	StrBlobPtr sp(csb);
	cout << sp.deref() << endl;  // => hello 
	sp.incr();
	cout << sp.deref() << endl;  // => hello 
	
}
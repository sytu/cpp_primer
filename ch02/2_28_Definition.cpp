#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	//a.
	// int i, *const cp;  
	//Illegal. define and int variable and int constant pointer without initialization. Illegal because a constant pointer needs to be initialized during definition. 
	
	//b.
	// int *p1, *const p2;
	//illegal. The first part is fine which define a normal pointer without initialization. The Second part is illegal as the result of the same problem that the question above has made.

	//c.
	// const int ic, &r = ic;
	//illegal. A constant must be initialized during definition because it cannot be changed after definition.
	
	//d.
	// const int *const p3;
	//illegal a constant pointer must be initialized.
	
	//e.
	const int *p;
	//legal this is a pointer that points to a constant . therefore this pointer doesn't have to be initialized. However, the pointer doesn't point to any actual object.
	
	return 0;
}
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
 	//a.
	// int i = -1, &r = 0;  //illegal because the reference r cannot bind with a literal 0
 	 
 	//b.
 	int i2 = 100;
	int *const p2 = &i2;    //legal if i2 is a type int object and is not a constant. If i2 is a constant, the statement will be illegal.
 	//c.
	const int i = -1, &r = 0;  //legal r is a reference that binds with a constant object, which is a literal 0.

 	//d.
 	int i3 = 100;
	const int *const p3 = &i3; //legal if i2 is a type int object no matter i2 is a const or not
 	
 	//e.
	const int i8 = 1;
	// int i8 = 1;
	const int *p1 = &i8;  //Legal if p1, which is a pointer that points to a constant, and i8 is either a type int constant or a type int variable
 	
 	//f.
	// const int &const r2; //illegal there is no constant reference. in other words, 'const' qualifier may not be applied to a reference. A reference can be binded with  a constant but cannot become a constant because a reference is not an actual object.

	//g.
	int ia = 10;
	const int cia = ia, &ra = ia;  //legal. First part initializes a type int constant cia with the value of a type int variable ia. Second part initializes a type int reference that refers to a constant with a type int variable ia. 
	//the second part above is good because a reference that is binded with a constant can also refer to a normal variable. The reference doesn't care the object it is binded with is a constant or not.

	return 0;
}
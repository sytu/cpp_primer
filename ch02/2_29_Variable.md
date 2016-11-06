//a.
Legal. The value of a type int constant can be assigned to a type int variable.

//b.
Illegal. The value of a type int constant pointer cannot be assigned to a type int normal pointer. Because the value of a normal pointer can be changed but the value of a constant pointer cannot be changed.
	
const int fun = 10;
int *p1;
const int *const p3 = &fun;
p1 = p3;   //error: assigning to 'int *' from incompatible type 'const int *const'


//c.
Illgeal. A type int normal pointer cannot point to a constant. 


//d.
Illegal. p3 is a constant pointer which cannot be assigned with any value after definition.

//e.
Illegal. Same probelm with above

//f.
Illegal. ic is a constant that cannot be assigned with any value after definition.

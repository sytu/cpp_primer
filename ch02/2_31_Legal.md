//a. r1 = v2;
Legal. r1 is a type int reference. v2 is a top-level type int constant. According to the definitions above, it is legal to copy the value of a a top-level type int constant to a type int reference.

const int v2 = 0;
int v1 = v2;
int &r1 = v1;     //bind reference r1 with variable v1
r1 = v2;          //this statement actually assigns the value of constant v2 to reference r1, which will also assign the value to v1. but the value is still zero
cout << r1 << endl; // => 0    
r1 = 100;         //assign the value of 100 to reference r1, which will also assign the value to v1
cout << v1 << endl; // => 100 
cout << v2 << endl; //no effect on the constant v2

However, r1 = v2 will be illegal without some of the definitions:

const int v2 = 0;
int &r1 = v2;  //error: binding value of type 'const int' to reference to type 'int' drops 'const' qualifier


//b. p1 = p2;
Illegal. p1 is a normal pointer that can point to any type of object. p2 is a pointer that points to a constant (low-level const).If the sytem allows p1 to point to the object that p2 points to, there is a possibility for pointer p1 to change accidently that constant object, which may not be a desirable outcome.

//c. p2 = p1;
Legal. P2 is a pointer that points to a constant (low-level const) however it can also point to a non-constant object, like p1, which is normal pointer that points to a type int variable.

//d. p1 = p3;
Illegal. P1 is a normal pointer that points to a type int variable(non-const). P3 is a constant pointer (top-level const) that points to a constant (low-level const). It is illegal to copy the value of a pointer with low-level const to a normal pointer.

//e. p2 = p3;
Legal. Both p2 and p3 has low-level const. The top-level const of p3 can be ignored.

const int v2 = 0;
int i = v2;
const int *p2 = &v2, *const p3 = &i;
p2 = p3;
p3 = p2;  //error p3 is a constant pointer cannot be assigned with the other value
int ppp;
ppp = p3;  //error because ppp2 is not low-level const
ppp1 = p2;  //error because ppp2 is not low-level const
int *ppp2;
ppp2 = p3;  //error because ppp2 is not low-level const
ppp2 = p2;  //error because ppp2 is not low-level const


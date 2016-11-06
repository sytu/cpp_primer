// i: int constant  = 42
// j: int  = 42
// k: a reference that binds with an int constant  = 42 
// p: a pointer that points to an int constant
// j2: int constant  = 42                                    
// k2: a reference that binds with an int constant, so as a reference its type is int  

#include <iostream>
#include <typeinfo>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	const int i = 42;
	auto j = i; 
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;

	cout << typeid(i).name() << endl;   // => i 
	cout << typeid(j).name() << endl;   // => i 
	cout << typeid(k).name() << endl;   // => i
	cout << typeid(p).name() << endl;   // => PKi
	cout << typeid(j2).name() << endl;  // => i  
	cout << typeid(k2).name() << endl;  // => i  
	
	return 0;
}
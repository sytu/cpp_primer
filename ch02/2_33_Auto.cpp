#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	auto i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;

	//a.
	a = 42; //a is an int of 42
	
	//b.
	b = 42; //b is an int of 42
	
	//c.
	c = 42; //c is an int of 42
	
	//d.
	d = 42; //illegeal. d is a pointer that points to an int object i. It can only take address but 42 is a type int literal.
	
	//e.
	e = 42; //illegal. e is a pointer that points to a const int object.
	
	//f.
	g = 42; //illegal. g is a reference that binds with an int constant. The value of the reference g cannot be changed.
	

	return 0;
}
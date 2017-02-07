#include <vector>
#include "13_13_x.h"

void f1(const X x) {}
void f2(const X& x) {}

int main(void) {
	X x1; 
	X x3;
	X x4;
	// X x2 = x1;
	// x2 = x1;
	// f1(x1);
	// f2(x1);
	// X* px = new X;
	// delete px;
	// X* px = new X(x1); // => X(const X&)
	// delete px;
	// vector<X> vx = {x1, x3};
	vector<X> vx;
	vx = {x1, x3};
	vx.push_back(x4);
}
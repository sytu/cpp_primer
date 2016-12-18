#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

class Y;

class X {
	Y * py = nullptr;
};

class Y {
	X ox;
};

int main(void) {
	
}
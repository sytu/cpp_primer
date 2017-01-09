#include <iostream>

using std::cout; using std::cin; using std::endl; 

void fun() {
	int val = 3;
	auto is_zero = [val] () mutable -> bool { 
		if (val > 0) {
			--val;
			cout << "Change of val: " << val << endl; 
			return false;
		} else {
			cout << "Change of val: " << val << endl; 
			return true;
		}
	};
	// while (!is_zero()) {  			// 2 	0 	 0
	// 	cout << is_zero() << endl;		// 1(0) 0(1)
	// }
	/*
	=>
	0
	1
	*/
	for (int i=0; i<6; i++) {
		cout << is_zero() << endl; 
	}
	/*
	=> 
	0
	0
	0
	1
	1
	1
	*/
	cout << endl; 
}

int main(void) {
	fun();
}
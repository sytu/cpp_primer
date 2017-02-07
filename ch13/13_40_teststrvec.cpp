#include <iostream>

using namespace std;

#include "13_40_strvec.h"

int main(void) {
	StrVec sv1({"hello", "world"});
	cout << sv1.size() << endl;   	 // => 0  
	StrVec sv2(sv1);
	cout << *sv2.begin() << endl; 	 // => hello
	StrVec sv3;
	sv3 = sv1;
	cout << sv3.size() << endl;   	 // => 2 
	cout << sv3.capacity() << endl;  // => 2 
	cout << *(sv3.end()-1) << endl;  // => world 
	sv3.push_back("hahha");
	cout << *(sv3.end()-1) << endl;  // => hahha
}
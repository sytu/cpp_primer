#include <iostream>
#include "12_2_StrBlob.h"
using std::cout; using std::cin; using std::endl; 

int main(void) {
	StrBlob s = {"hello", "w"};
	cout << s.back() << endl; 
	s.push_back("orld");
	cout << s.back() << endl; 
	s.pop_back();
	cout << s.back() << endl; 
	cout << s.size() << endl; 	
	s.pop_back();
	s.pop_back();
	cout << s.size() << endl; 
	// cout << s.front() << endl; 
	
	s.push_back("orld");
	StrBlob a = s;
	cout << a.size() << endl; 

}
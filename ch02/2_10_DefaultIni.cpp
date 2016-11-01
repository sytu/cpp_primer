#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int gloabl_int;
std::string global_str;

int main(void) {
	int local_int;
	std::string local_str;

	cout << local_int << endl; //16    an uninitialized odd value
	cout << local_str << endl; //""  empty string
	
	cout << gloabl_int << endl; //0
	cout << global_str << endl; //""
			
	

	return 0;
}
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	string str = "ab2c3d7R4E6";
	string num = "1234567890";	
	string letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	string::size_type pos1 = 0;
	while ((pos1 = (str.find_first_of(num, pos1))) != string::npos) {
		cout << "found num at index: " << pos1
			 << " elememt is: " << str[pos1] << endl; 
		++pos1;
	}

	cout << endl; 

	string::size_type pos2 = 0;
	while ((pos2 = (str.find_first_of(letter, pos2))) != string::npos) {
		cout << "found letter at index: " << pos2
			 << " elememt is: " << str[pos2] << endl; 
		++pos2;
	}
}
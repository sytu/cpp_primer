#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;  //cp是一个指向常量字符数组(一个字符串常量)的首位置的指针
	while (*cp) {  // running loop before reach the next location of the last index
		cout << *cp << endl;   
		++cp;   // point to next char element
	}
	// => h e l l o 各占一行 
	return 0;
}





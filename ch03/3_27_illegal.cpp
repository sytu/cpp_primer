#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	unsigned buf_size = 1024;

	// a
	int ia[buf_size];  // illegal buf_size is not a constant expression
	// b
	int ia2[4 * 7 - 14];   //legal    4 * 7 - 14 is a constant expression
	// c
	// int ia[txt_size()];  // illegal because the return value of txt_size can not be received during the compilation, which cannot be regarded as a constant expression
	// d
	// char st[11] = "fundamental";  // illegal need one more space for '\0'  
	char st[12] = "fundamental";  // illegal string "fundamental" has 12 elements including the ending character '\0' so the array needs one more space 
	return 0;
}
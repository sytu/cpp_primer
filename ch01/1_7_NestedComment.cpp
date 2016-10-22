#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
	cout << "This program should end unexpectedly" << endl;
	/*
	Because of this illegal /* nested comment*/ 
	*/

	return 0;
}

//OUTPUT:
// 1_7_NestedComment.cpp:9:26: warning: '/*' within block comment [-Wcomment]
//         Because of this illegal /* nested comment*/
//                                 ^
// 1_7_NestedComment.cpp:10:3: error: expected expression
//         */
//          ^
// 1_7_NestedComment.cpp:12:2: error: expected expression
//         return 0;
//         ^
// 1 warning and 2 errors generated.
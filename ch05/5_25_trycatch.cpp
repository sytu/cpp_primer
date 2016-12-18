#include <iostream>
using namespace std;

int main(void) {
	// int v1,v2;
	// cout << "Input two integers:" << endl;
	// while (cin >> v1 >> v2) {
	// 	try {
	// 		if (v2 == 0) 
	// 			throw runtime_error("The second number cannot be 0!"); 
	// 		cout << v1 / v2 << endl; 
	// 		cout << "Input two integers:" << endl;
	// 	} catch(runtime_error err) {
	// 		cout << err.what() << endl
	// 			 << "Try again? " << endl 
	// 			 << "Enter y or n:" << endl;
	// 		char c;
	// 		cin >> c;
	// 		if (!c || c=='n')
	// 			break;	
	// 		cout << "Input two integers:" << endl;
	// 	}
	// }

	// better version
	for (int v1,v2; cout << "Input two integers:\n", cin>> v1 >> v2; ) {
		try {
			if (v2 == 0) 
				throw runtime_error("Divisor should not be zero.");
			cout << v1 / v2 << endl; 
		} catch (runtime_error err) {
			cout << err.what() << endl
				 << "Try again? " << endl 
				 << "Enter y or n:" << endl;
			char c;
			cin >> c;
			if (!c || c=='n')
				break;
		}	
	}
	return 0;
}


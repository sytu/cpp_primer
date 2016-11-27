#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> vec = {1,12,13};
	// a
	cout << *vec.begin() << endl; 			// => 1 
	cout << (*vec.begin()) << endl; 		// => 1 

	//  b
	cout << *vec.begin() + 1 << endl; 		// => 2 
	cout << (*vec.begin()) + 1 << endl; 	// => 2 
	
	
	return 0;
}	
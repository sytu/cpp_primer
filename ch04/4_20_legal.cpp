#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<string> svec = {"helloworld", "ssss"};
	auto iter = svec.begin();
	// a 
	// *iter++;  // legal

	// b
	// (*iter)++ // ilegal //cannot increment value of type

	// c
	// *iter.empty(); // no member of iterator iter named 'empty' 

	// d
	// iter->empty(); // legal

	// e
	// ++*iter; // cannot take increment value of type string

	// f
	cout << iter++->empty() << endl; // => 0 
	
	cout << *iter << endl; // => ssss 

	return 0;
}
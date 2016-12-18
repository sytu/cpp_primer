#include <iostream>
#include <vector>
//#include <string>
using namespace std;
// 1 shall not pass the value of vector to a formal parameter. so should use pass by reference to handle the comparing of two vectors
bool compareLength(const vector<int> &i1, const vector<int> &i2) {
	return i1.size() > i2.size() ? true : false;
}
// 2  if the function need to alter the value of formal paramter without affecting the argument, should call by value
void sayNumber(int n) {
	while (n > -1)
		cout << n-- << endl; 
}
int main(void) {
	// 1
	vector<int> ivec1 = {1,2,3,4,5,6};	
	vector<int> ivec2 = {1,2,3,4,5};	
	cout << "Is vector 1 longer than vector 2?"
		 << ((compareLength(ivec1, ivec2)) ? " Yes." : " No." ) << endl; 

	// 2
	int n = 10;
	cout << "How many integer are there between " << n << " and 0?" << endl; 
	sayNumber(n);
	return 0;
}
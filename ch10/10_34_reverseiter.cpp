#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector;

int main(void) {
	vector<int> iv = {1,2,3,3,5,6};
	for (auto rbeg = iv.crbegin(); rbeg!=iv.crend(); )
		cout << *rbeg++ << " ";
	cout << endl;  
}
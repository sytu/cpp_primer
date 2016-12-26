#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;

int main(void) {
	vector<int> i1 = {1,2,3,4};
	vector<int> i2 = {1,2,3,4};
	vector<int> i3 = {1,2,3};
	i1 == i2 ? cout << "Yes" << endl : cout << "not equal" << endl; 
	i1 == i3 ? cout << "Yes" << endl : cout << "not equal" << endl; 
}
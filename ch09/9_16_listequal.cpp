#include <iostream>
#include <vector>
#include <list>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector; using std::list;

int main(void) {
	vector<int> i1 = {1,2,3,4};
	list<int> li3 = {1,2,3};
	i1 == li3 ? cout << "Yes" << endl : cout << "not equal" << endl; 
	// error: invalid operands to binary expression ('vector<int>' and 'list<int>')
}
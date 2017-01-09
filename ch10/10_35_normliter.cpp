#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::vector;

int main(void) {
	vector<int> iv = {1,2,3,3,5,6};
	for (auto end = iv.cend(); end!=iv.cbegin(); )
		cout << *(--end) << " ";
	cout << endl;  
}
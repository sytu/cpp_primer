#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::endl; 
using std::vector;

int main(void) {
	vector<int> vec;
	vec.reserve(10);
	// cout << vec.size() << endl; // => 0

	fill_n(back_inserter(vec), 10, 0);

	for (int i : vec) 
		cout << i << " ";

	cout << endl; 

}
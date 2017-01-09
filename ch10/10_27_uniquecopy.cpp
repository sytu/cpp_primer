#include <iostream>
#include <algorithm>
#include <list>
#include <vector>


using std::cout; using std::cin; using std::endl; 
using std::vector; using std::list;

int main(void) {
	vector<int> iv = {1,5,2,3,4,4,5,5};	
	list<int> il;

	sort(iv.begin(), iv.end());
	// unique_copy(iv.begin(), iv.end(), back_inserter(il));
	unique_copy(iv.begin(), iv.end(), inserter(il, il.begin()));
	for_each(il.begin(), il.end(), [](int i) { cout << i << " "; });
}
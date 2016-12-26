#include <iostream>
#include <list>
#include <deque>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::deque; using std::list;

void PrintDeque(const deque<int> &id) {
	for (auto const i : id)
		cout << i << " "; 
	cout << endl; 
}

int main(void) {
	deque<int> odd, even;
	list<int> il = {1,2,3,4,5,6,10,7,7};

	for (auto const i : il) 
		(i & 1 ? odd : even).push_back(i);
		// (i & 1) ? odd.push_back(i) : even.push_back(i);

	PrintDeque(odd);
	PrintDeque(even);
}
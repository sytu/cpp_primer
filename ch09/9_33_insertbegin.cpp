#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;

int main(void) {
	vector<int> ivec = {1,2,3,4,5};
	auto begin = ivec.begin();
	while (begin != ivec.end()) {
		++begin;
		begin = ivec.insert(begin, 42);
		++begin;
	}
	for (auto const i : ivec)
		cout << i << " ";
	cout << endl;  
	// 1 42 2 42 3 42 4 42 5 42 

	// the version will crash because the iterator begin will be invalid after insert operation
	vector<int> ivec2 = {1,2,3,4,5};
	auto begin2 = ivec2.begin();
	while (begin2 != ivec2.end()) {
		++begin2;
		ivec2.insert(begin2, 42);
		++begin2;
	}
	for (auto const i : ivec2)
		cout << i << " ";
	cout << endl; 
}
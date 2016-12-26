#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main(void) {
	list<int> il = {0,1,2,3,4,5,6,7,8,9};
	auto iter = il.begin();
	while (iter != il.end()) {
		if (*iter % 2) {
			iter = il.insert(iter, *iter);
			// += can only be used by string、vector、deque、array
			// 1. 
			// advance(iter, 2);  
			// or
			// 2.
			++iter;
			++iter;
		} else {
			iter = il.erase(iter);
		}
	}		
	for (auto const i : il)
		cout << i << " ";
	cout << endl;	
	// => 1 1 3 3 5 5 7 7 9 9 

	forward_list<int> ifl = {0,1,2,3,4,5,6,7,8,9};
	auto prev = ifl.before_begin();
	auto iter2 = ifl.begin();
	while (iter2 != ifl.end()) {
		if (*iter2 % 2) {
			iter2 = ifl.insert_after(prev, *iter2);
			++iter2; ++prev;
			++iter2; ++prev;
			// advance(cur, 2), advance(prv, 2);
		} else {
			iter2 = ifl.erase_after(prev);
		}
	}		
	for (auto const i : ifl)
		cout << i << " ";
	cout << endl;	
	// => 1 1 3 3 5 5 7 7 9 9 
}
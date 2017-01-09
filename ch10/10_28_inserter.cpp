#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>


using std::cout; using std::cin; using std::endl; 
using std::vector; using std::list; using std::deque; using std::forward_list; 

int main(void) {
	vector<int> iv;
	for (size_t i=0; i!=9; ) iv.push_back(++i);

	list<int> il;
	deque<int> id;
	vector<int> iv2;
	
	auto it_il = back_inserter(il);
	auto it_id = front_inserter(id);
	auto it_iv2 = inserter(iv2, iv2.begin());

	for (size_t i=0; i!=iv.size(); ++i) {
		*it_il = iv[i];
		*it_id = iv[iv.size() - i - 1];
		it_iv2 = iv[i];
	} 		
	for_each(il.begin(), il.end(), [](int i) { cout << i << " "; });
	cout << endl; 
	for_each(id.begin(), id.end(), [](int i) { cout << i << " "; });
	cout << endl; 
	for_each(iv2.begin(), iv2.end(), [](int i) { cout << i << " "; });
	cout << endl; 


}
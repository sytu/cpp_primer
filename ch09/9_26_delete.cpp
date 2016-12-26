#include <iostream>
#include <vector>
#include <list>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector; using std::list;
using std::begin; using std::end;

int main(void) {
	int a[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> odd_v(begin(a), end(a));
	// list<int> even_l(begin(a), end(a));
	list<int> even_l(begin(odd_v), end(odd_v));
	// list<int> even_l(odd_v.begin(), odd_v.end());
	
	for (auto iter = odd_v.begin(); iter!=odd_v.end(); ++iter) 
		if (!(*iter & 1))
			odd_v.erase(iter);
	for (auto const i : odd_v) cout << i << " "; 
	cout << endl; 

	for (auto iter = even_l.begin(); iter!=even_l.end();)  {
		if (*iter & 1)
			iter = even_l.erase(iter);
		else 
			++iter;
	}
	for (auto const i : even_l) cout << i << " "; 
	cout << endl; 
}
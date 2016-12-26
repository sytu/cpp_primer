#include <iostream>
#include <forward_list>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::forward_list;

int main(void) {
	forward_list<int> fl = {1,2,3,4,5};

	for (auto const i : fl)
		cout << i << " ";
	cout << endl;  

	auto curr = fl.begin();
	auto prev = fl.before_begin();

	while (curr != fl.end()) {
		if (*curr & 1)
			curr = fl.erase_after(prev);
		else 
			prev = curr++;
	}

	for (auto const i : fl)
		cout << i << " ";
	cout << endl;
}
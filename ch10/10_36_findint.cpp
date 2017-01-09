#include <iostream>
#include <list>
#include <algorithm>

using std::cout; using std::cin; using std::endl; 
using std::list;

int main(void) {
	list<int> li = {1,0,3,3,0,6};
	auto lst = find(li.rbegin(), li.rend(), 0);

	lst++; // point to one before last 0
	int p = 0;

	for (auto iter=li.begin(); iter!=lst.base(); ++iter, ++p);

	// now iter point to lst.base(); p equals to distance from li.begin() to lst.base()

	if (p >= li.size())
		cout << "No zero" << endl; 
	else 
		cout << "last zero at index " << p << endl; // => 4 
}
#include <iostream>
#include <list>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::list; using std::vector;

// int main(void) {
// 	// vector<int> vec; // error vec's size needs to be at least equal with lst's
// 	list<int> lst;
// 	int i;
// 	while (cin >> i)
// 		lst.push_back(i);

// 	vector<int> vec(lst.size());

// 	copy(lst.begin(), lst.end(), vec.begin());

// 	for (int i : vec) 
// 		cout << i << " ";

// 	cout << endl; 

// }
// or use back_inserter
int main(void) {
	vector<int> vec;
	list<int> lst;
	int i;
	while (cin >> i)
		lst.push_back(i);

	copy(lst.begin(), lst.end(), back_inserter(vec));

	for (int i : vec) 
		cout << i << " ";

	cout << endl; 

}
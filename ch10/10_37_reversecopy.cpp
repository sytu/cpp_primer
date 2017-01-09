#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;


int main(void) {
	vector<int> vi {1,2,3,4,5,6,7,8,9,10};
	ostream_iterator<int> o_iter(cout, " ");
	copy(vi.begin(), vi.end(), o_iter);
	cout << endl; 

	list<int> li;

	// 1.
	// vector<int>::reverse_iterator re(vi.cbegin() + 2);  // vi.begin() + 2 points to vi[2], 3rd elem      re points to elem: 2
	// cout << "elem: " << *re << endl; 				   // => 2
	// vector<int>::reverse_iterator rb(vi.cbegin() + 7);  // vi.begin() + 7 points to vi[7], 8th elem      rb points to elem: 7
	// cout << "elem: " << *rb << endl; 				   // => 7
	// copy(rb, re, back_inserter(li));

	// 2.
	copy(vi.crbegin()+vi.size()-7, vi.crbegin()+vi.size()-2, back_inserter(li));
	copy(li.begin(), li.end(), o_iter);  // => 7 6 5 4 3  

	cout << endl; 
}
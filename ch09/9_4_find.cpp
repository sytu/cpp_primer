#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::vector; 

using Ciiter = vector<int>::const_iterator;

bool Find(Ciiter &beg, Ciiter &end, int ival) {
	while (beg != end) {
		if (*beg++ == ival)
			return true;
	}
	return false;
}

int main(void) {
	vector<int> ivec = {1,2,3};
	Ciiter b = ivec.begin();
	Ciiter e = ivec.end();
	if (Find(b, e, 3))
		cout << "Yes" << endl; 
	else  
		cout << "No" << endl; 
}
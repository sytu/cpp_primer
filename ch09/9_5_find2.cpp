#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::vector; 

using Ciiter = vector<int>::const_iterator;

Ciiter Find(Ciiter &beg, Ciiter &end, int ival) {
	while (beg != end) {
		if (*beg == ival)
			return beg;
		++beg;
	}
	return beg;
}

int main(void) {
	vector<int> ivec = {1,2,3};
	Ciiter b = ivec.begin();
	Ciiter e = ivec.end();
	int n = 4;
	Ciiter it = Find(b, e, n);
	if (*Find(b, e, n) == n)
		cout << "Yes" << endl; 
	else  
		cout << "No" << endl; 
}
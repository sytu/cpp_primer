#include <iostream>
#include <fstream>

using namespace std;

#import "12_19_StrBlob.h"

int main(void) {
	ifstream in("/Users/sytu/workspace/c++/C++_Primer/ch12/i_12_20.txt");
	StrBlob sb;
	string line;

	while (getline(in, line)) 
		sb.push_back(line);

	for (auto beg=sb.begin(), end=sb.end(); neq(beg, end); beg.incr())
		cout << beg.deref() << endl; 

	cout << endl; 

	StrBlob s{"a", "b"};
	StrBlobPtr sp = s.begin();
	// StrBlobPtr sp = s.end();
	sp.incr();
	sp.incr();
	// sp.decr();
	cout << sp.deref() << endl; 

	cout << endl; 
}	
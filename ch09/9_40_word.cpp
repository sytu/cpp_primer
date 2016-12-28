#include <iostream>
#include <vector>

#define SZ 1048

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;

int main(void) {
	vector<string> svec;
	svec.reserve(1024);
	string word;
	while (svec.size() != SZ)
		svec.push_back("a");
	svec.resize(svec.size() + svec.size()/2);
	cout << "vector's size    : " << svec.size() << endl
		 << "vector's capacity: " << svec.capacity() << endl << endl;
	
}
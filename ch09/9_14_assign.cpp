#include <iostream>
#include <vector>
#include <string>
#include <list>

using std::cout; using std::cin; using std::endl; 
using std::string; using std::list; using std::vector;

int main(void) {
	list<const char*> cli = {"hello", "world"};
	vector<string> svec;
	svec.assign(cli.begin(), cli.end());

	for (auto s : svec)
		cout << s << endl; 
}	
#include <iostream>
#include <list>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::list;

int main(void) {
	string word;
	// basically just need to change the declaration below
	list<string> sl;
	// for (string word; cin >> word && word != "exit"; input.push_back(word));
	while (cin >> word && word != "exit")
		sl.push_back(word);
	cout << endl; 
	list<string>::const_iterator beg = sl.cbegin();
	for (list<string>::const_iterator end = sl.cend(); beg!=end; ++beg)
		cout << *beg << endl; 
}
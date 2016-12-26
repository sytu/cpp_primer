#include <iostream>
#include <deque>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::deque;

int main(void) {
	string word;
	deque<string> sd;
	// for (string word; cin >> word && word != "exit"; input.push_back(word));
	while (cin >> word && word != "exit")
		sd.push_back(word);
	cout << endl; 
	deque<string>::const_iterator beg = sd.cbegin();
	for (deque<string>::const_iterator end = sd.cend(); beg!=end; ++beg)
		cout << *beg << endl; 
}
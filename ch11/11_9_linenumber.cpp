#include <iostream>
#include <map>
#include <list>
#include <string>
#include <sstream>

using std::cout; using std::cin; using std::endl; 
using std::list; using std::map; using std::string; using std::istringstream;

void addWord(map<string, list<int>> &word_line_num, const string &word, unsigned num) {
	word_line_num[word].push_back(num);
}

int main(void) {
	map<string, list<int>> word_line_num;	
	string line;
	unsigned num = 1;
	while (getline(cin, line)) {
		istringstream iss(line);
		string word;
		while (iss >> word)
			addWord(word_line_num, word, num);
		++num;
	}	

	for (const auto &e : word_line_num) {
		cout << e.first << " appears at line: ";
		for (const auto n : e.second)
			cout << n << " ";
		cout << endl << endl; 
	}
}
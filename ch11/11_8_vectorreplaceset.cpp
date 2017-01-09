#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::string;
using std::map;

string & trans(string &s) {
	if (s[0] >= 'A' && s[0] <= 'Z') 
		s[0] -= ('A' - 'a');
	if (s[s.size()-1] == ',' || s[s.size()-1] == '.')
		s.erase(s.size()-1, 1);
	return s;
}

int main(void) {
	map<string, size_t> w_map;
	vector<string> exclude = {"hi", "the"};
	string word;
	while (cin >> word) {
		if (find(exclude.begin(), exclude.end(), word) == exclude.end())
			++w_map[trans(word)];
	}

	cout << endl; 

	for (const auto &e : w_map) 
		cout << e.first << " appears : " 
			 << e.second << (e.second > 1 ? " times." : " time.") << endl; 
}
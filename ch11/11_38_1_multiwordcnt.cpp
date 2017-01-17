#include <iostream>
#include <unordered_map>
#include <string>

using std::cout; using std::cin; using std::endl; 
using std::unordered_map; using std::string;

// string & trans(string &s) {
// 	if (ispunct(s.back()))
// 		s = s.substr(0, s.size()-1);
// 	if (isupper(s.front()))
// 		s.front() = tolower(s.front());
// 	return s;
// }

string & trans(string &s) {
	if (s[0] >= 'A' && s[0] <= 'Z') 
		s[0] -= ('A' - 'a');
	if (s[s.size()-1] == ',' || s[s.size()-1] == '.')
		s.erase(s.size()-1, 1);
	return s;
}

int main(void) {
	unordered_map<string, size_t> w_map;
	string word;
	while (cin >> word) {
		++w_map[trans(word)];
	}

	cout << endl; 

	for (const auto &e : w_map) 
		cout << e.first << " appears : " 
			 << e.second << (e.second > 1 ? " times." : " time.") << endl; 
}
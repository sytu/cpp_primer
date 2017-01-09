#include <iostream>
#include <map>
#include <string>

using std::cout; using std::cin; using std::endl; 
using std::map; using std::string;

int main(void) {
	map<string, size_t> w_map;
	string word;

	while (cin >> word) {
		++w_map[word];
	}

	cout << endl; 

	for (const auto &e : w_map) 
		cout << e.first << " appears : " 
			 << e.second << (e.second > 1 ? " times." : " time.") << endl; 
}
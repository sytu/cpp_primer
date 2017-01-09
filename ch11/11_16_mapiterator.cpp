#include <iostream>
#include <map> 
#include <string>

using std::cout; using std::cin; using std::endl; 
using std::map; using std::string;

int main(void) {
	map<string, string> m = { {"lin", "China"}, {"Nancy", "USA"} };
	auto it = m.begin();
	it->second = "Russia";
	for (const auto &e : m) {
		cout << e.first << " from " << e.second << endl;
	}
}
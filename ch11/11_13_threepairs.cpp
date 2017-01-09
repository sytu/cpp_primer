#include <iostream>
#include <utility>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::pair; using std::istringstream; using std::string; using std::vector;


int main(void) {
	vector<pair<string, int>> vp;
	int i;
	string s;
	
	while (cin >> s && cin >> i)  {
		// 1
		// vp.push_back(pair<string, int>(s, i));

		// 2
		// vp.push_back(make_pair(s, i));

		// 3
		// pair<string, int> p = {s, i};
		// vp.push_back(p);

		// 4
		vp.push_back({s, i}); // the most succinct
	}

	cout << endl; 

	for (const auto &p : vp) 
		cout << p.first << " with " << p.second << endl; 
	
	cout << endl; 
}

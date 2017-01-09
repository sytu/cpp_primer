#include <iostream>
#include <utility>
#include <vector>

using std::cout; using std::cin; using std::endl; 
using std::pair; using std::istringstream; using std::string; using std::vector;


int main(void) {
	vector<pair<string, int>> vp;
	int i;
	string s;
	
	while (cin >> s && cin >> i) 
		vp.push_back(pair<string, int>(s, i));

	cout << endl; 

	for (const auto &p : vp) 
		cout << p.first << " with " << p.second << endl; 
	
	cout << endl; 
}

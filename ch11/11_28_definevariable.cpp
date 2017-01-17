#include <iostream>
#include <vector>
#include <map>

using std::cout; using std::cin; using std::endl; 
using std::vector; using std::map; using std::string; 

int main(void) {
	map<string, vector<int>> m = {{"hi", {1,2,3}}};
	map<string, vector<int>>::iterator it = m.find("hi");
	if (it == m.end())
		cout << "not found" << endl; 	
	else 
		cout << "found" << endl; 

}
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>

using std::cout; using std::cin; using std::endl; 
using std::string; using std::map; using std::vector;
using std::istringstream; using std::pair;

void addFamily(map<string, vector<pair<string, string>>> &svm, const string &lst_name) {
	if (svm.find(lst_name) == svm.end())
		svm[lst_name] = vector<pair<string, string>>(); // create an empty vector<string>
}

void addChild(map<string, vector<pair<string, string>>> &svm, const string &lst_name, const string &child, const string &birth) {
	svm[lst_name].push_back({child, birth});
}

int main() {
	map<string, vector<pair<string, string>>> families;

	addFamily(families, "Lin");
	addChild(families, "Lin", "A", "04071995");
	addChild(families, "Lin", "B", "10011971");
	addChild(families, "Lin", "C", "12281994");
	addFamily(families, "Linda");
	addChild(families, "Linda", "Jamie", "01011001");
	addFamily(families, "Linda");
	addFamily(families, "Azanda");
	addChild(families, "Azanda", "Cat", "02081993");

	for (const auto &s : families) {
		cout << "Family: " << s.first << " has ";
		for (const auto &child : s.second)
			cout << child.first << "[" << child.second << "]" << " "; 
		cout << endl << endl; 
	}
}

// int main(void) {
// 	map<string, vector<string>> family;	
// 	string lst_name;
// 	string children;

// 	while (cin >> lst_name && getline(cin, children)) {
// 		string child_name;
// 		istringstream iss(children);
// 		while (iss >> child_name)
// 			family[lst_name].push_back(child_name);
// 	}

// 	// for
// 	for (const auto & s : family) {
// 		cout << "Family: " << s.first << " has ";
// 		for (const auto & child : s.second)
// 			cout << child << " "; 
// 		cout << endl << endl; 
// 	}
// }
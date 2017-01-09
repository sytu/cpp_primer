#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>

using std::cout; using std::cin; using std::endl; 
using std::string; using std::map; using std::vector;
using std::istringstream;

void addFamily(map<string, vector<string>> &svm, const string &lst_name) {
	if (svm.find(lst_name) == svm.end())
		svm[lst_name] = vector<string>(); // create an empty vector<string>
}

void addChild(map<string, vector<string>> &svm, const string &lst_name, const string &child) {
	svm[lst_name].push_back(child);
}

int main() {
	map<string, vector<string>> families;

	addFamily(families, "Lin");
	addChild(families, "Lin", "A");
	addChild(families, "Lin", "B");
	addChild(families, "Lin", "C");
	addFamily(families, "Linda");
	addChild(families, "Linda", "Jamie");
	addFamily(families, "Linda");

	for (const auto &s : families) {
		cout << "Family: " << s.first << " has ";
		for (const auto &child : s.second)
			cout << child << " "; 
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
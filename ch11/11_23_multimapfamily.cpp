#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>

using std::cout; using std::cin; using std::endl; 
using std::string; using std::multimap; using std::vector;
using std::istringstream;

void addChild(multimap<string, vector<string>> &svm, const string &s, const vector<string> &vs) {
	svm.insert({s, vs});
}

int main() {
	multimap<string, vector<string>> families;

	addChild(families, "Lin", {"B", "C"});
	addChild(families, "Lin", {"Cash"});
	addChild(families, "Linda", {"Jamie"});
	addChild(families, "Linda", {"Gamie"});

	for (const auto &s : families) {
		cout << "House: " << s.first << " has ";
		for (const auto &child : s.second)
			cout << child << " "; 
		cout << endl << endl; 
	}

}


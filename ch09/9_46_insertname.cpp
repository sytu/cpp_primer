#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; 

string AddToName(string name, const string &pre, const string &post) {
	name.insert(0, pre);
	return name.insert(name.size(), post);
}

int main(void) {
	string n = "james";
	cout << AddToName(n, "Mrs.", ".Jr.") << endl; 
}
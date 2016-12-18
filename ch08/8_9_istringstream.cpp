#include <iostream>
#include <sstream>

using std::cout; using std::cin; using std::endl; using std::string; using std::istream; using std::istringstream;

istream &read(istream &is) {
	string line, word;
	while (getline(cin, line)) {
		istringstream iss(line);
		while (iss >> word)
			cout << word << " ";
		cout << endl; 
	}
	cout << endl; 
	is.clear();
	return is;
}

int main(void) {
	// @here
	read(cin);  // ctrl+d => EOF
}
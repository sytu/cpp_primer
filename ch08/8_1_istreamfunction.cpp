#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; using std::istream;

istream &read(istream &is) {
	string word;
	while (is >> word && !is.eof()) {
		cout << word << " ";
	}
	cout << endl; 
	is.clear();
	cout << endl << "done" << endl; 
	return is;
}

int main(void) {
	read(cin);  // ctrl+d => EOF
}
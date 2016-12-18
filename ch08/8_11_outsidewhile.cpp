#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::string; using std::vector; using std::istringstream;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(void) {
	// declare 
	vector<PersonInfo> people;
	string word, line;
	istringstream iss;
	// read line from file -> read word from line -> save word to vector
	while (getline(cin, line) && line != "End") {
		iss.clear();
		iss.str(line);
		if (!iss) {
			std::cerr << "Error" << endl; 
			return -1;
		}
		PersonInfo someone;
		iss >> someone.name;
		while (iss >> word) 
			someone.phones.push_back(word);
		people.push_back(someone);
	}
	// print vector
	cout << endl << "Print Vector: " << endl; 
	for (auto &p : people) {
		cout << p.name << " ";
		for (string &str : p.phones) 
			cout << str << " ";
		cout << "\n";   
	}
}
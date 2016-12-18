#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::string; using std::vector; using std::ifstream; using std::istringstream;

#define contact_file "/Users/sytu/workspace/c++/C++_Primer/ch08/code/contact.txt"

// class
struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(void) {
	// declare 
	ifstream ifs(contact_file);
	istringstream iss;
	vector<PersonInfo> people;
	string word, line;
	// read line from file -> read word from line -> save word to vector
	while (getline(ifs, line)) {
		iss.str(line);
		PersonInfo info;
		iss >> info.name;
		while (iss >> word) {
			info.phones.push_back(word);
		}
		people.push_back(info);
	}
	// print vector
	for (auto &p : people) {
		cout << p.name << " ";
		for (string &str : p.phones) 
			cout << str << " ";
		cout << "\n\n";   
	}
}
// if (!iss) {
// 	cout << "Error" << endl; 
// }
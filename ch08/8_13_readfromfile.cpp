#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using std::cout; using std::cin; using std::endl; using std::cerr;
using std::string; using std::vector; 
using std::ostringstream; using std::ifstream; using std::istringstream;

#define contact_file "/Users/sytu/workspace/c++/C++_Primer/ch08/code/contact.txt"

struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid(const string &str) {
	return str.size() > 4 && isdigit(str[0]); // 字符串大小大于4且首元素为数字
}

string format(const string &str) {
	return str.substr(0, 3) + "-" + str.substr(3,1) + "-" + str.substr(4);
}

int main(void) {
	ifstream ifs(contact_file, ifstream::in);
	if (!ifs) {
		std::cerr << "read error with: " << contact_file << endl;
		return -1;
	}
	vector<PersonInfo> people;
	string word, line;
	istringstream iss;
	while (getline(ifs, line)) {
		iss.clear();
		iss.str(line);
		PersonInfo record;
		iss >> record.name;
		while (iss >> word) 
			record.phones.push_back(word);
		people.push_back(record);
	}
	
	for (const PersonInfo &entry : people) {
		ostringstream formatted, badNums; 
		for (const string &nums : entry.phones) {
			if (!valid(nums)) 
				badNums << " " << nums; 
			else 
				formatted << " " << format(nums);
		}
		if (badNums.str().empty()) 
			cout << entry.name << " " 		
			   << formatted.str() << endl;  
		else  								
			cerr << "input error: " << "[" << entry.name << "]"
			   << " invalid number(s):" << "[" << badNums.str() << " ]" << endl;
	}
	
}
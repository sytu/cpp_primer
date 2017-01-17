// improve function transWord for omitting the notation after the word
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

using std::cout; using std::cin; using std::endl; 
using std::ifstream; using std::istringstream; 
using std::string; using std::map; using std::pair;using std::to_string;
using std::cerr; using std::runtime_error;

map<string, string> prepareMap(ifstream &mf) {
	map<string, string> r_map;
	string key, value;
	while (mf >> key && getline(mf, value)) {
		try {
			if (value.size() > 1)
				r_map[key] = value.substr(1);
			else 
				throw runtime_error("Key " + key + " doesn't have any replaced value.");
		} catch (runtime_error err) {
			cerr << err.what() << endl;
		}
	}	
	return r_map;
}

pair<string, string> parseWord(string s) {
	pair<string, string> p = {s, ""};

	if (s.back() == ',') {
		s.erase(s.size()-1);
		return {s, ","};
	}

	if (s.back()=='.') {
		s.erase(s.size()-1);
		return {s, "."};
	}

	return p;
}

string transWord(map<string, string> &r_map, string &s) {
	pair<string, string> p = parseWord(s);
	string word = p.first;
	string n = p.second;
	auto found = r_map.find(word);
	if (found != r_map.end()) 
		return found->second + n;
	else 
		return s;
}

void wordTransform(ifstream &mf, ifstream &tf) {
	auto replace_map = prepareMap(mf);
	string line;
	while (getline(tf, line)) {
		istringstream iss(line);
		string word;
		bool first_word = true;
		while (iss >> word) {
			if (first_word)
				first_word = false;
			else
				cout << " "; 
			cout << transWord(replace_map, word); 
		}
		cout << endl; 
	}
}

int main(void) {
	ifstream mf("/Users/sytu/workspace/c++/C++_Primer/ch11/i_11_33_mapfile.txt");
	if (!mf) {
		cerr << "Data input error with mapfile" << endl; 
		return -1;
	}
	ifstream tf("/Users/sytu/workspace/c++/C++_Primer/ch11/i_11_33_textfile.txt");
	if (!tf) {
		cerr << "Data input error with textfile" << endl; 
		return -1;
	}

	wordTransform(mf, tf);
}








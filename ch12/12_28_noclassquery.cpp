#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <memory>
#include <vector>
#include <stdexcept>
#include <sstream>

using namespace std;
using line_no = vector<string>::size_type;

void preQuery(ifstream &ifs, map<string, shared_ptr<set<line_no>>> &mp, shared_ptr<vector<string>> &file) {
	string line;
	while (getline(ifs, line)) {
		file->push_back(line);
		int num = file->size();
		istringstream iss(line);
		string word;
		while (iss >> word) {
			auto &lines = mp[word];
			if (!lines)
				lines.reset(new set<line_no>);
			lines->insert(num);
		}
	}
}

shared_ptr<set<line_no>> findQuery(const string &sought, map<string, shared_ptr<set<line_no>>> mp, shared_ptr<vector<string>> file) {
	static shared_ptr<set<line_no>> no_data(new set<line_no>);
	auto loc = mp.find(sought);
	if (loc == mp.end())
		return no_data;
	else
		return loc->second;
}

string make_plural(size_t ctrl, const string &s, const string &e) { return ctrl > 1 ? s + e : s; }

ostream & print(ostream &os, const string &sought, shared_ptr<set<line_no>> lines, shared_ptr<vector<string>> file) {
	cout << sought << " occurs " << lines->size() << make_plural(lines->size(), "time", "s") << endl; 
	for (auto num : *lines) {
		cout << "( line " << num + 1 << " ) "
			 << *(file->begin() + num) << endl;
	}
	return os;
}

void runQueries(ifstream &in) {
	shared_ptr<vector<string>> file(new vector<string>);		
	map<string, shared_ptr<set<line_no>>> mp;

	preQuery(in, mp, file);

	while (true) {
		cout << "Enter word to look for, or q to quit: " << endl; 
		string s;
		if (!(cin >> s) || s == "q") break;
		shared_ptr<set<line_no>> lines = findQuery(s, mp, file);
		print(cout, s, lines, file) << endl;
	}
}

int main(void) {
	ifstream ifs("/Users/sytu/workspace/c++/C++_Primer/ch12/i_12_27.txt");
	if (!ifs) {
		cerr << "Error Input" << endl;
		return -1;
	}

	runQueries(ifs);
}
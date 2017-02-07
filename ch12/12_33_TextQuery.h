#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include <map>
#include <set>
#include <memory>
#include <vector>
#include <stdexcept>
#include <sstream>

using line_no = vector<string>::size_type;

class QueryResult;

class TextQuery {
public:
	TextQuery(ifstream &);
	QueryResult query(const string &) const;
private:
	shared_ptr<vector<string>> file;		
	map<string, shared_ptr<set<line_no>>> mp;
};

TextQuery::TextQuery(ifstream &ifs): file(new vector<string>) {
	string line;
	while (getline(ifs, line)) {
		file->push_back(line);
		int num = file->size() - 1;
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

class QueryResult {
friend ostream & print(ostream &, const QueryResult &);
public:
	QueryResult(const string &s, shared_ptr<set<line_no>> l, shared_ptr<vector<string>> f)
				: sought(s), lines(l), file(f) {}

	set<line_no>::iterator begin() { return lines->cbegin(); }
	set<line_no>::iterator end() { return lines->cend(); }
	shared_ptr<vector<string>> get_file() { return file; }

private:
	string sought;
	shared_ptr<set<line_no>> lines;
	shared_ptr<vector<string>> file;
	// 
};

QueryResult TextQuery::query(const string &sought) const {
	static shared_ptr<set<line_no>> no_data(new set<line_no>);
	auto loc = mp.find(sought);
	if (loc == mp.end())
		return QueryResult(sought, no_data, file);
	else
		return QueryResult(sought, loc->second, file);
}

string make_plural(size_t ctrl, const string &s, const string &e) { return ctrl > 1 ? s + e : s; }

ostream & print(ostream &os, const QueryResult &qr) {
	cout << qr.sought << " occurs " << qr.lines->size() << make_plural(qr.lines->size(), " time", "s") << endl; 
	for (auto num : *qr.lines) {
		cout << "( line " << num + 1 << " ) "
			 << *(qr.file->begin() + num) << endl;
	}
	return os;
}

#endif
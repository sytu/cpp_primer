#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include <map>
#include <set>
#include <memory>
#include <stdexcept>
#include <sstream>

#include "12_32_StrBlob.h"

class QueryResult;

class TextQuery {
public:
	TextQuery(ifstream &);
	QueryResult query(const string &) const;
private:
	StrBlob file;		
	map<string, shared_ptr<set<Sz_t>>> mp;
};

TextQuery::TextQuery(ifstream &ifs): file(new vector<string>) {
	string line;
	while (getline(ifs, line)) {
		file.push_back(line);
		int num = file.size() - 1;
		istringstream iss(line);
		string word;
		while (iss >> word) {
			auto &lines = mp[word];
			if (!lines)
				lines.reset(new set<Sz_t>);
			lines->insert(num);
		}
	}
}

class QueryResult {
friend ostream & print(ostream &, const QueryResult &);
public:
	QueryResult(const string &s, shared_ptr<set<Sz_t>> l, StrBlob f)
				: sought(s), lines(l), file(f) {}
private:
	string sought;
	shared_ptr<set<Sz_t>> lines;
	StrBlob file;
};

QueryResult TextQuery::query(const string &sought) const {
	static shared_ptr<set<Sz_t>> no_data(new set<Sz_t>);
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
			 << qr.file.begin().deref(num) << endl;
	}
	return os;
}






#endif
#ifndef STR_BLOB_H
#define STR_BLOB_H
#include <initializer_list>
#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

using std::vector; using std::initializer_list; using std::shared_ptr; using std::string; using std::out_of_range;
using std::make_shared;

class StrBlob {
public:
	using Size_type = vector<string>::size_type;
	StrBlob();
	StrBlob(initializer_list<string> li);

	Size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const string &s) { data->push_back(s); }
	void pop_back();

	string & front();
	const string & front() const;
	string & back();
	const string & back() const;
private:
	shared_ptr<vector<string>> data;
	void check(Size_type i, const string &s) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> li): data(make_shared<vector<string>>(li)) {}

void StrBlob::check(Size_type i, const string &s) const {
	if (i >= data->size())
		throw out_of_range(s);
}

void StrBlob::pop_back() {
	check(0, "pop_back() on empty StrBlob");
	data->pop_back();
}

string & StrBlob::front() {
	check(0, "front() on empty StrBlob");
	return data->front();	
}
const string & StrBlob::front() const {
	check(0, "front() on empty StrBlob");
	return data->front();	
}
string & StrBlob::back() {
	check(0, "back() on empty StrBlob");
	return data->back();	
}
const string & StrBlob::back() const {
	check(0, "back() on empty StrBlob");
	return data->back();	
}

#endif 


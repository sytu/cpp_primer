#ifndef STR_BLOB_H
#define STR_BLOB_H
#include <initializer_list>
#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

using std::vector; using std::initializer_list;  using std::string; 
using std::shared_ptr; using std::make_shared; using std::weak_ptr; 
using std::out_of_range; using std::runtime_error;

class StrBlobPtr;

class StrBlob {
	using Sz_t = vector<string>::size_type;
	friend class StrBlobPtr;
public:	
	StrBlob();
	StrBlob(initializer_list<string>);

	Sz_t size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void pop_back();
	void push_back(const string &s) { data->push_back(s); }

	string & front();
	const string & front() const;
	string & back();
	const string & back() const;

	StrBlobPtr begin();
	StrBlobPtr end();

private:
	shared_ptr<vector<string>> data;
	void check(Sz_t, const string&) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> li): data(make_shared<vector<string>>(li)) {}

void StrBlob::check(Sz_t i, const string &msg) const {
	if (i >= data->size())
		throw out_of_range(msg);
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

class StrBlobPtr {
	friend bool eq(const StrBlobPtr& lhs, const StrBlobPtr& rhs);
public:
	StrBlobPtr(): curr(0) {}
	StrBlobPtr(StrBlob &sb, size_t sz = 0): wptr(sb.data), curr(sz) {}

	string & deref() const;
	StrBlobPtr & incr();
	StrBlobPtr & decr();
private:
	weak_ptr<vector<string>> wptr;
	size_t curr;
	shared_ptr<vector<string>> check(size_t, const string&) const;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const {
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlobPtr");
	if (i >= ret->size()) 
		throw out_of_range(msg);

	return ret;
}

string & StrBlobPtr::deref() const {
	auto ret = check(curr, "deref() past end of StrBlobPtr");
	return (*ret)[curr];
}
StrBlobPtr & StrBlobPtr::incr() {
	check(curr, "incr() past end of StrBlobPtr");
	++curr;
	return *this; 
}
StrBlobPtr & StrBlobPtr::decr() {
	--curr;
	check(curr, "decr() past begin of StrBlobPtr");
	return *this; 
}

StrBlobPtr StrBlob::begin() {
	return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end() {
	return StrBlobPtr(*this, data->size());
}

bool eq(const StrBlobPtr& lhs, const StrBlobPtr& rhs) {
	auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
	if (l == r)
		return (!r || lhs.curr == rhs.curr);
	else
		return false;
}
bool neq(const StrBlobPtr& lhs, const StrBlobPtr& rhs) {
	return !eq(lhs, rhs);
}

#endif
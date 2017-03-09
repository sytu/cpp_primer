#ifndef STRBLOB_H
#define STRBLOB_H
#include <vector>
#include <memory>
#include <stdexcept>
#include <string>

using Sz_t = vector<string>::size_type;

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
	friend bool operator==(const StrBlob &, const StrBlob &);
	friend bool operator!=(const StrBlob &, const StrBlob &);
public:
	StrBlob();
	StrBlob(initializer_list<string>);
	StrBlob(vector<string> *);

	Sz_t size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const string &s) { data->push_back(s); }
	void pop_back();

	string & front();
	const string & front() const;
	string & back();
	const string & back() const;

	StrBlobPtr begin();
	StrBlobPtr end();
	StrBlobPtr begin() const;
	StrBlobPtr end() const;

private:
	shared_ptr<vector<string>> data;
	void check(Sz_t, const string &) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> li): data(make_shared<vector<string>>(li)) {}
StrBlob::StrBlob(vector<string> *p): data(p) {}

void StrBlob::check(Sz_t i, const string &msg) const {
	if (i >= data->size())
		throw out_of_range(msg);
}

void StrBlob::pop_back() {
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string & StrBlob::front() {
	check(0, "front on empty StrBlob");
	return data->front();
}
const string & StrBlob::front() const {
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back() {
	check(0, "back on empty StrBlob");
	return data->back();
}
const string & StrBlob::back() const {
	check(0, "back on empty StrBlob");
	return data->back();
}

class StrBlobPtr {
	friend bool operator==(const StrBlobPtr &, const StrBlobPtr &);
	friend bool operator!=(const StrBlobPtr &, const StrBlobPtr &);
public:
	StrBlobPtr(): curr(0) {}
	StrBlobPtr(StrBlob &sb, Sz_t sz = 0): wptr(sb.data), curr(sz) {}
	StrBlobPtr(const StrBlob &sb, Sz_t sz = 0): wptr(sb.data), curr(sz) {}

	string & deref() const;
	string & deref(int off) const;
	StrBlobPtr & incr();
	StrBlobPtr & decr();

private:
	weak_ptr<vector<string>> wptr;
	Sz_t curr;
	shared_ptr<vector<string>> check(Sz_t, const string &) const;
};

shared_ptr<vector<string>> StrBlobPtr::check(Sz_t i, const string &msg) const {
	auto ret = wptr.lock();
	if (!ret)
		throw runtime_error("unbound StrBlob");
	if (i >= ret->size())
		throw out_of_range(msg);
	return ret;
}

string & StrBlobPtr::deref() const {
	auto sp = check(curr, "deref() past end of StrBlobPtr");
	return (*sp)[curr];
}
string & StrBlobPtr::deref(int off) const {
	auto sp = check(curr + off, "deref() past end of StrBlobPtr");
	return (*sp)[curr + off];
}

StrBlobPtr & StrBlobPtr::incr() {
	check(curr, "incr() past the end of StrBlobPtr");
	++curr;
	return *this;
}
StrBlobPtr & StrBlobPtr::decr() {
	--curr;
	check(curr, "decr() past the begin of StrBlobPtr");
	return *this;
}

inline StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
inline StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

inline StrBlobPtr StrBlob::begin() const { return StrBlobPtr(*this); }
inline StrBlobPtr StrBlob::end() const { return StrBlobPtr(*this, data->size()); }

bool operator==(const StrBlob &lhs, const StrBlob &rhs) {
	return lhs.data == rhs.data;
}
bool operator!=(const StrBlob &lhs, const StrBlob &rhs) {
	return !(lhs == rhs);
}

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
	auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
	if (l == r)
		return (!r || lhs.curr == rhs.curr);
	else 
		return false;
}	
bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs) { return !(lhs == rhs); }


#endif
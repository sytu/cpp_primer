#ifndef STRVEC_H 
#define STRVEC_H
#include <string>
#include <memory>
#include <algorithm>

class StrVec {
public:
	StrVec(): element(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(initializer_list<string> li);

	StrVec(const StrVec &);
	StrVec& operator=(const StrVec &);
	~StrVec();

	void push_back(const string &);
	size_t size() { return first_free - element; }
	size_t capacity() { return cap - element; }

	void resize(size_t);
	void reserve(size_t);
	void resize(size_t, const string &);

	string * begin() const { return element; }
	string * end() const { return first_free; }
private:
	allocator<string> alloc;
	void chk_n_alloc() { if (first_free == cap) reallocate(); }
	pair<string *, string *> alloc_n_cpy(const string *, const string *);
	void free();
	void reallocate();
	void reallocate(size_t);
	string * element;
	string * first_free;
	string * cap;

};
StrVec::StrVec(initializer_list<string> li) {
	auto newdata = alloc_n_cpy(li.begin(), li.end());
	element = newdata.first;
	first_free = cap = newdata.second;
}

void StrVec::push_back(const string &str) {
	chk_n_alloc();
	alloc.construct(first_free++, str);
}
void StrVec::free() {
	if (element) {
		for_each(element, first_free, [this](string &s) { alloc.destroy(&s); }); // prefer this version
		alloc.deallocate(element, cap-element);
	}
}
pair<string *, string *> StrVec::alloc_n_cpy(const string *b, const string *e) {
	auto newdata = alloc.allocate(e - b);
	return {newdata, uninitialized_copy(b, e, newdata)};
}
void StrVec::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto elem = element;
	auto dest = newdata;
	for (size_t i=0; i!=size(); ++i) 
		alloc.construct(dest++, std::move(*elem++));
	free();
	element = newdata;
	first_free = dest;
	cap = element + newcapacity;
}
void StrVec::reallocate(size_t newcapacity) {
	auto newdata = alloc.allocate(newcapacity);
	auto elem = element;
	auto dest = newdata;
	for (size_t i=0; i!=size(); ++i) 
		alloc.construct(dest++, std::move(*elem++));
	free();
	element = newdata;
	first_free = dest;
	cap = element + newcapacity;
}

void StrVec::resize(size_t new_sz) {
	if (new_sz > size()) {
		while (size() < new_sz) 
			push_back("");
	} 
	else if (new_sz < size()) {
		while (size() > new_sz)
			alloc.destroy(--first_free);
	}
}
void StrVec::resize(size_t new_sz, const string &s) {
	if (new_sz > size()) {
		while (size() < new_sz) 
			push_back(s);
	} 
	else if (new_sz < size()) {
		while (size() > new_sz)
			alloc.destroy(--first_free);
	}
}

void StrVec::reserve(size_t newcapacity) {
	if (newcapacity > capacity()) { reallocate(newcapacity); }
}

StrVec::StrVec(const StrVec &sv) {
	auto newdata = alloc_n_cpy(sv.begin(), sv.end());
	element = newdata.first;
	first_free = cap = newdata.second;
}
StrVec& StrVec::operator=(const StrVec &sv) {
	auto newdata = alloc_n_cpy(sv.begin(), sv.end());
	free();
	element = newdata.first;
	first_free = cap = newdata.second;
	return *this;
}
StrVec::~StrVec() { free(); }

#endif
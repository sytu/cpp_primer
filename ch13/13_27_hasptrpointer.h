#include <string>

using std::string; using std::size_t;

class HasPtr {
public:
	HasPtr(const string &s = string()):
		ps(new string(s)), i(0), use(new size_t(1)) {}
	HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i), use(hp.use) { ++*use; }
	HasPtr& operator=(const HasPtr&);
	HasPtr& operator=(const string&);
	~HasPtr();
	string& operator*() { return *ps; }
private:
	string * ps;
	int i;
	size_t * use;
};

HasPtr& HasPtr::operator=(const HasPtr&rhs) {
	++*rhs.use;
	if (--*use == 0) {
		delete ps; 
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}

inline HasPtr& HasPtr::operator=(const string&rhs) {
	*ps = rhs;
	return *this;
}

inline HasPtr::~HasPtr() { 
	if (--*use == 0) {
		delete ps; 
		delete use;
	}
}

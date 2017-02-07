#include <string>

using std::string;

class HasPtr {
	friend void swap(HasPtr&, HasPtr&);
public:
	HasPtr(const string &s = string()):
		ps(new string(s)), i(0) {}
	HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i) {}
	HasPtr& operator=(const HasPtr&);
	HasPtr& operator=(const string&);
	~HasPtr() { delete ps; }
	string& operator*();
private:
	string * ps;
	int i;
};

HasPtr& HasPtr::operator=(const HasPtr&rhs) {
	auto newps = new string(*rhs.ps);
	delete ps;
	ps = newps;
	i = rhs.i;
	return *this;
}

HasPtr& HasPtr::operator=(const string&rhs) {
	*ps = rhs;
	return *this;
}

string& HasPtr::operator*() { return *ps; }

void swap(HasPtr &lhs, HasPtr&rhs) {
	std::cout << "now swapping " << *lhs.ps << " and " << *rhs.ps << std::endl; 
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}

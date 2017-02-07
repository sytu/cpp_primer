class HasPtr {
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr &);
	HasPtr& operator=(const HasPtr&);
private:
	std::string * ps;
	int i;
};
HasPtr::HasPtr(const HasPtr &hp) {
	ps = new std::string(*hp.ps);
	i = hp.i;
}
HasPtr& HasPtr::operator=(const HasPtr&hp) {
	auto new_ps = new std::string(*hp.ps);
	delete ps;
	ps = new_ps;
	i = hp.i;
	return *this;
}


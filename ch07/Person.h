#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl; using std::istream; using std::ostream;

class Person {
friend istream &read(istream &, Person &);
friend ostream &print(ostream &os, const Person &someone);

public:
	Person() = default;
	Person(const string &n): m_sName(n) {}
	Person(const string &n, const string &a): m_sName(n), m_sAddr(a) {}
	explicit Person(istream &is) { read(is, *this); }
	const string& getName() const { return m_sName; } // auto getName() const -> std::string const&
	const string& getAddr() const { return m_sAddr; }  // auto getAddr() const -> std::string const&

private:
	string m_sName;
	string m_sAddr;
};

// nonmember function
istream &read(istream &is, Person &someone) {
	is >> someone.m_sName  >> someone.m_sAddr;
	return is;
}
ostream &print(ostream &os, const Person &someone) {
	os << "Name: " << someone.getName() << " " << "Address: " << someone.getAddr();
	return os;
}


#endif
#include <iostream>
class Employee {
	friend std::istream &read(std::istream &is, Employee &p);

public:
	Employee(const std::string &s = ""): name(s) {}  // default
	Employee(std::iostream &is) { read(is, *this); }
	Employee(const std::string &s, const std::string &t, const std::string &d): name(s), title(t), dpt(d) {}
	Employee(const std::string &s, int a, const std::string &g, const std::string &d, const std::string &t, int y, double m): 
			 name(s), age(a), gender(g), dpt(d), title(t), year(y), salary(m) {}
private:
	std::string name;
	int age;
	std::string gender;
	std::string dpt;
	std::string title;
	int year;
	double salary;
};

std::istream &read(std::istream &is, Employee &p) {
	is >> p.name >> p.age >> p.gender >> p.dpt >> p.year >> p.salary;
	return is;
}
#include <iostream>
class Employee {
	friend std::istream &read(std::istream &is, Employee &p);

public:
	Employee(): Employee("", 0, "", "", "", 0, 0.0f) {}
	Employee(const std::string &s): Employee(s, 0, "", "", "", 0, 0.0f) {} 
	Employee(std::iostream &is): Employee() { read(is, *this); }
	Employee(const std::string &s, const std::string &t, const std::string &d): Employee(s, 0, "", d, t, 0, 0.0f) {}
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
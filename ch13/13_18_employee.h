#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public: 
	Employee() { num = seq++; } // Employee(): num(seq++) {}
	Employee(const string &s): name(s), num(seq++) {}
	const string & getName() { return name; }
	int getNum() { return num; }
private:
	string name;
	long num;
	static long seq;
};

long Employee::seq = 10000;

#endif
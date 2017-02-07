#ifndef X_H
#define X_H

#include <iostream>

using namespace std;

struct X {
	X() { cout << "X()" << endl;  }
	X(const X&) { cout << "X(const X&)" << endl; }
	X& operator=(const X&) { 
		cout << "operator=(const X&)" << endl; 
		return *this;
	}
	~X() { cout << "~X()" << endl; }
};

#endif
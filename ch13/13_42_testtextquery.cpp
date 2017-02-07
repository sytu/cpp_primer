#include <iostream>
#include <fstream>

using namespace std;

#include "13_42_textquery.h"

void runQueries(ifstream &in) {
	TextQuery tq(in);

	while (true) {
		cout << "Enter word to look for, or q to quit: " << endl; 
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

int main(void) {
	ifstream ifs("/Users/sytu/workspace/c++/C++_Primer/ch13/i_13_42.txt");
	if (!ifs) {
		cerr << "Error Input" << endl;
		return -1;
	}

	runQueries(ifs);
}
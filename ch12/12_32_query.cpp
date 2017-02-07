#include <iostream>
#include <fstream>

using namespace std;

#include "12_32_TextQuery.h"

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
	ifstream ifs("/Users/sytu/workspace/c++/C++_Primer/ch12/i_12_32.txt");
	if (!ifs) {
		cerr << "Error Input" << endl;
		return -1;
	}

	runQueries(ifs);
}
#include <iostream>
#include <fstream>

using namespace std;

#include "12_27_TextQuery.h"

void runQueries(ifstream &in) {
	TextQuery tq(in);

	do {
		cout << "Enter word to look for, or q to quit: " << endl; 
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	} while (true); 
}

int main(void) {
	ifstream ifs("/Users/sytu/workspace/c++/C++_Primer/ch12/i_12_27.txt");
	if (!ifs) {
		cerr << "Error Input" << endl;
		return -1;
	}

	runQueries(ifs);
}
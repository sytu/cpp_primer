#include "../ch07/Sales_data.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
	ifstream input(argv[1]);
	ofstream output(argv[2], ofstream::app); 
	Sales_data total;
	if (read(input, total)) {
		Sales_data trans;
		while (read(input, trans)) {
			if (trans.isbn() == total.isbn()) {
				total = add(total, trans);
			} else {
				print(output, total) << endl; 
				total = trans;
			}
		}
		print(output, total) << endl; 
	} else {
		cerr << "Not proper data input." << endl;
		return -1;
	}
	return 0;
}


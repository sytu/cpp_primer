#include "../ch07/Sales_data.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
	ifstream input(argv[1]);
	Sales_data total;
	if (read(input, total)) {
		Sales_data trans;
		while (read(input, trans)) {
			if (trans.isbn() == total.isbn()) {
				total = add(total, trans);
			} else {
				print(cout, total) << endl; 
				total = trans;
			}
		}
		print(cout, total) << endl; 
	} else {
		cerr << "Not proper data input." << endl;
		return -1;
	}
	return 0;
}

/*
./8_6 input_8_6.txt
BookNo: nogi-1 UnitsSold: 120 Revenue: 1212 AveragePrice: 10.1
BookNo: akb-1 UnitsSold: 20 Revenue: 22 AveragePrice: 1.1
*/

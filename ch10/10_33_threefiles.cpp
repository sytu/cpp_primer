#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	if (argc != 4) {
		cerr << "usage: ./data/10_33_threefiles "
		        "i_10_33.txt i_10_33_1.txt i_10_33_2.txt" << endl; 
		return -1;
	}

	ifstream ifs(argv[1]);
	if (!ifs) {
		cerr << "read input file error" << endl; 
		exit(1);
	}
	ofstream ofs_odd(argv[2]), ofs_even(argv[3]);
	if (!ofs_odd) {
		cerr << "read output file 1 error" << endl; 
		exit(1);
	}
	if (!ofs_even) {
		cerr << "read output file 2 error" << endl; 
		exit(1);
	}

	istream_iterator<int> i_it(ifs), eof;		
	ostream_iterator<int> o_it_odd(ofs_odd, " "), o_it_even(ofs_even, "\n");
	
	while (i_it != eof) {
		if (*i_it & 1) 
			o_it_odd = *i_it;
		else 
			o_it_even = *i_it;
		++i_it;
	}


	// second way by using a vector but apparently unnecessary
	// vector<int>	iv;
	// while (i_it != eof)
	// 	iv.push_back(*i_it++);

	// for_each(iv.begin(), iv.end(), 
	// 	[&o_it_odd, &o_it_even] (const int i) {
	// 		if (i & 1) {
	// 			o_it_odd = i;
	// 		}
	// 		else {
	// 			o_it_even = i;
	// 		}
	// 	});
}
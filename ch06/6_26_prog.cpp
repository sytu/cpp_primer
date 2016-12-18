#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	for (auto i=0; i!=argc; ++i) 
		cout << argv[i] << " "; 	

	return 0;
}

// ./6_26_prog -d -o ofile data0 % 
// => ./6_26_prog -d -o ofile data0 %
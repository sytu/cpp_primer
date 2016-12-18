#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	string str;
	for (size_t i=1; i!=argc; i++) 
		str += string(argv[i]) + " ";
	cout << str << endl; 
	return 0;
}
// ./6_25_printtwopara hello world and hello sytu
// => hello world and hello sytu
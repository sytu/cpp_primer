#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; using std::ifstream; using std::vector;

#define ifile "/Users/sytu/workspace/c++/C++_Primer/ch08/input_8_4.txt" 

void ReadFileToVector(const string &fileName, vector<string> &svec) {
	ifstream in(fileName);
	if (in) {
		string buff;
		while (std::getline(in, buff)) 
			svec.push_back(buff);
	} else cout << "Couln't open: " << fileName << endl; 
}

int main(void) {
	vector<string> svec;

	ReadFileToVector(ifile, svec);

	for (const auto &s : svec)
		cout << s << endl; 
}
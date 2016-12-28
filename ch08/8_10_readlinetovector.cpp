#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; using std::ifstream; using std::istringstream; using std::vector; using std::cerr;

#define file "/Users/sytu/workspace/c++/C++_Primer/ch08/i_8_10.txt"

// read line from file, save to vector
void ReadFileToVector(const string &fileName, vector<string> &svec) {
	ifstream ifs(fileName);
	if (!ifs) {
        cerr << "No data?" << endl;
    }
	string line;
	while (getline(ifs, line)) {
		svec.push_back(line);
	}
}
// read&save string element from vector and print
void PrintVector(vector<string> &svec) {
	istringstream iss;
	cout << svec.size() << endl; 
	for (auto i=0; i!=svec.size(); ++i) {
		// istringstream iss(svec[i]);
		iss.str(svec[i]);
		cout << iss.str() << " "; 
	}
	cout << endl; 
}
int main(void) {
	vector<string> svec;
	ReadFileToVector(file, svec);
	PrintVector(svec);
}
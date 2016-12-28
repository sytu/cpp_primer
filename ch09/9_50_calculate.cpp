#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::vector;

// int
// int main(void) {
// 	vector<string> svec{"2", "2", "6"};
// 	int sum = 0;
// 	for (size_t i=0; i!=svec.size(); ++i) 
// 		sum += stoi(svec[i]);
// 	cout << sum << endl; 
// }

// double
int main(void) {
	vector<string> svec{"2.2", "2.2", "6.6"};
	double sum = 0;
	for (auto i : svec)
		sum += stof(i);
	cout << sum << endl; 
}
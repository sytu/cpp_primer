#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintSVector(vector<string> v) {
	if (!v.empty())
		for (auto s : v) cout << s << endl; 
	else 
		cout << "empty"; 
	cout << endl; 
}

int main(void) {
	vector<string> svec;
	string word;

	// method 1
	while (cin>>word && word!="exit") {
		for (auto &c : word)  
			c = toupper(c);    
		svec.push_back(word);
	}

	// method 2
	// while (cin>>word && word!="exit") 
	// 	svec.push_back(word);
	// for (auto &s : svec) {
	// 	for (auto &c : s) {
	// 		c = toupper(c);
	// 	}
	// }

	PrintSVector(svec);
	return 0;
}
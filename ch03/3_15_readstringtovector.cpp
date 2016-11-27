#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<string> svec;
	string word;

	while (cin >> word && word != "exit") {
		svec.push_back(word);
	}

	for (auto s : svec) {
		cout << s << " "; 
	}

	cout << endl; 
	
	return 0;
}
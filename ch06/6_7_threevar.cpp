#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define try 3

bool guessWord(string guess) {
	string key = "sytu";
	bool ret;
	static vector<string> svec = {key};

	auto beg = svec.begin();  // I use iterator at here because I want to
	auto end = svec.end();

	for (; beg != end; ++beg) 
		ret = (guess == *beg) ? 1 : 0;
	svec.push_back(guess);

	if (svec.size() > try) {
		cout << "Out of chances. Say bye." << endl; 
		exit(0);
	} 

	return ret;
}

int main(void) {
	unsigned cnt = try;
	for (string in; cout << "Enter yes or no(only " << cnt << " chances):" << endl, cin >> in; --cnt)  {
		if (guessWord(in)) {
			cout << "Did you cheat?" << endl; 
			break;
		} else cout << "Wrong!" << endl; 
	}

	return 0;
}
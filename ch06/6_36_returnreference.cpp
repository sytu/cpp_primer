#include <iostream>
#include <string>
using namespace std;

string arr[] = {"ha","ha","ha","ha","ha","ha","ha","ha","ha","ha"};

string (&getArr())[10] {
	return arr;
}

int main(void) {
	for (auto s : getArr())
		cout << s << " "; 
	return 0;
}
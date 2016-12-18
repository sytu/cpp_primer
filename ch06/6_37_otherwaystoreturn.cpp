#include <iostream>
#include <string>
using namespace std;
using SarrR = string (&)[10];

string arr[] = {"ha","ha","ha","ha","ha","ha","ha","ha","ha","ha"};

string (&getArr())[10] {
	return arr;
}

SarrR getArr2() { // I prefer this method. Seems to be more straightforward. And the declared type can be reused in other places. 
	return arr;
}

decltype(arr) & getArr3() {
	return arr;
}

auto getArr4() -> string (&)[10] {
	return arr;
}

int main(void) {
	for (auto s : getArr())
		cout << s << " "; 
	cout << endl; 
	for (auto s : getArr2())
		cout << s << " "; 
	cout << endl; 
	for (auto s : getArr3())
		cout << s << " "; 
	cout << endl; 
	for (auto s : getArr4())
		cout << s << " "; 
	cout << endl; 
	return 0;
}
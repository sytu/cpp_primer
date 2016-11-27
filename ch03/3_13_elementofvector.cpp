#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> v1;
	// v1 is an empty vector that has no element
	vector<int> v2(10);
	// v2 has 10 elements of value of 0
	vector<int> v3(10, 42);
	// v3 has 10 elements of value of 42
	vector<int> v4{10};
	// v4 has 1 element of value of 10
	vector<int> v5{10, 42};
	// v5 has 2 elements of value of 10 and 42
	vector<string> v6{10};
	// v6 has 10 elemnts of ""
	vector<string> v7{10, "hi"};
	// v7 has 10 elements of value of "hi"
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void PrintIntVector(vector<int> v) {
	if (!v.empty())
		for (auto it=v.begin(); it!=v.end(); ++it)
			cout << *it << " "; 
	else 
		cout << "empty"; 
}
void PrintStringVector(vector<string> v) {
	if (!v.empty())
		for (auto it=v.begin(); it!=v.end(); ++it)
			cout << *it << " ";  
	else 
		cout << "empty"; 
}


int main(void) {
	// 1
	vector<int> v1;
	// v1 is an empty vector that has no element
	cout << "v1 : " << endl;
	PrintIntVector(v1);   // => empty        nothings will except an empty line will be printed
	cout << endl << endl; 

	// 2
	vector<int> v2(10);
	// v2 has 10 elements of value of 0
	cout << "v2 : " << endl;
	PrintIntVector(v2);   // => 0 0 0 0 0 0 0 0 0 0 
	cout << endl << endl;

	// 3
	vector<int> v3(10, 42);
	// v3 has 10 elements of value of 42
	cout << "v3 : " << endl;
	PrintIntVector(v3);   // => 42 42 42 42 42 42 42 42 42 42  
	cout << endl << endl;

	// 4
	vector<int> v4{10};
	// v4 has 1 element of value of 10
	cout << "v4: " << endl;
	PrintIntVector(v4);  // => 10 
	cout << endl << endl;

	// 5
	vector<int> v5{10, 42};
	// v5 has 2 elements of value of 10 and 42
	cout << "v5: " << endl;
	PrintIntVector(v5);   // => 10 42  
	cout << endl << endl; 


	// 6
	vector<string> v6{10};
	// v6 has 10 elemnts of ""
	cout << "v6 : " << endl;
	PrintStringVector(v6);  // =>     nothing but am empty line  because the elemens are ten empty string
	cout << endl << endl;

	// 7
	vector<string> v7{10, "hi"};
	// v7 has 10 elements of value of "hi"
	cout << "v7 : " << endl;
	PrintStringVector(v7);   // => hi hi hi hi hi hi hi hi hi hi 
	cout << endl << endl;
	return 0;
}
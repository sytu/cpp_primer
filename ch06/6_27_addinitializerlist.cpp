#include <iostream>
#include <initializer_list>
using namespace std;

int add(initializer_list<int> li) {
	int sum = 0;
	for (const int elem : li) {
		sum += elem;
	}
	return sum;
}

int main(void) {
	initializer_list<int> li{4,6,10};
	auto li2 = {4,6,10};
	cout << add(li) << endl; 
	cout << add(li2) << endl; 
	cout << add({4,6,10}) << endl; 
	return 0;
}
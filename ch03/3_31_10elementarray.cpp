#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int arr[10];

	for (size_t k=0; k<10; k++) 
		arr[k] = k;

	for (auto i : arr)
		cout << i << endl; 
		
	return 0;
}
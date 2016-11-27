#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	const unsigned sz = 5;
	int arr[sz] = {1,2,3,4,5};

	int *pend = end(arr);

	// for (int *pbeg=begin(arr); pbeg!=pend; pbeg++)
		// *pbeg = 0;
	for (int *b=arr; b!=arr+sz; b++) 
		*b =0;

	for (int i : arr) 
		cout << i << " "; 

	return 0;
}
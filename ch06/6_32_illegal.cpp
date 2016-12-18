#include <iostream>
using namespace std;
// legal. assign 0-9 to ten elements of an array
int &get(int *array, int index) {
	return array[index];
}
int main(void) {
	int ia[10];
	for (int i=0; i!=10; ++i)
		get(ia, i) = i;

	for (auto i:ia)
		cout << i << " "; 
	cout << endl; 
	return 0;
}
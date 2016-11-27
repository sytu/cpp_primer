#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int arr[] = {1,2,3,4,5};

	int *p1 = arr;
	cout << *p1 << endl; // => 1 
	int *p2 = &arr[2];  //arr[2] is 3
	p1 += p2 - p1;  // 将p1指向p2与p1之间距离(2-0=2)个位置的元素的位置    expression p2-p1 returns a value of type ptrdiff, which is a signed type defined in the cstddef header
	cout << *p1 << endl; // => 3  p1 now is pointing to arr[2] 
	
	//the program is illegal while pointer p1 and p2 point to different (array) objects

	return 0;
}
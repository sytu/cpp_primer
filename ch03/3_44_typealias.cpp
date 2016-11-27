#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	constexpr size_t rowCnt =3, colCnt = 4;
	int ia[rowCnt][colCnt];
	int cnt = 0;
	using int_array = int[colCnt];
	// typedef int int_array[colCnt];

	for (int_array *p=ia; p!=ia+rowCnt; p++) {
		for (int *q=*p; q!=*p+colCnt; q++) {
			*q = cnt;
			cnt++;
			cout << *q << ' '; 
		}
		cout << endl; 
	}
	return 0;
}
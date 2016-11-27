// cannot use auto, type alias, decltype
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	constexpr size_t rowCnt =3, colCnt = 4;
	int ia[rowCnt][colCnt];
	int cnt = 0;

	//v1 range for
	// for (int (&row)[colCnt] : ia) {
	// 	for (int (&col) : row) {
	// 		col = cnt;
	// 		cnt++;
	// 		cout << col << ' '; 
	// 	}
	// 	cout << endl; 
	// }

	//v2 normal for with index
	// for (size_t i=0; i!=rowCnt; i++) {
	// 	for (size_t j=0; j!=colCnt; j++) {
	// 		ia[i][j] = i * colCnt + j;
	// 		cout << ia[i][j] << ' '; 
	// 	}
	// 	cout << endl; 
	// }


	//v3 normal for with pointer
	for (int (*p)[colCnt]=ia; p!=ia+rowCnt; p++) {
		for (int *q=*p; q!=*p+colCnt; q++) {
			*q = cnt;
			cnt++;
			cout << *q << ' '; 
		}
		cout << endl; 
	}
	return 0;
}
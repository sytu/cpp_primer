#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	vector<int> ivec;
	const int sz = 10;   			 // 使用sz作为数组或者向量的维度
	srand((unsigned) time (NULL));   // 生成随机种子

	cout << "Original vector: " << endl; 
	for (auto i=0; i != sz; ++i) {
		ivec.push_back(rand() % 100);  // 生成 100 以内的随机数
		cout << ivec[i] << " ";       // 并输出
	}

	for (vector<int>::iterator iter=ivec.begin(); iter!=ivec.end(); ++iter) 
		*iter = ((*iter & 1) == 0) ?  *iter : *iter * 2;
	
	cout << endl << "After double odd: " << endl; 
	for (auto i : ivec) 
		cout << i << " "; // => 2 2 6 4 10 


	cout << endl; 
	
	return 0;
}
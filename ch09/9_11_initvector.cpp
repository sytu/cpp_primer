#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

void PrintV(const vector<int> &v) {
	static unsigned cnt = 0;
	cout << ++cnt << ":" << endl; 
	for (auto i : v)
		cout << i << " ";
	cout << endl;  
}

int main(void) {
	//a.
	vector<int> i1;
	PrintV(i1);
	
	//b.
	vector<int> i2(3);
	PrintV(i2);
	//c.
	vector<int> i3(3, 10);
	PrintV(i3);	
	
	//d.
	vector<int> i4 = {1,2,3};
	PrintV(i4);
	
	//e.
	vector<int> ia = {3,2,1};
	vector<int> i5 = ia;
	PrintV(i5);
	
	//f.
	vector<int> ib = {2,2,2};
	vector<int> i6(ib);
	PrintV(i6);
	
	//g. 	
	vector<int> i7{1,2,3};
	PrintV(i7);

	//h. 	
	vector<int> ic = {9,9,9};
	vector<int> i8(ic.begin(), ic.end());
	PrintV(i8); // 9 9

 }

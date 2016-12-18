#include <iostream>
using namespace std;

// for i
void print(const int num) {
	cout << num << endl; 
}
void print(const int *p) {
	if (p)
		cout << *p << endl; 
}

// for j
void print(const int *beg, const int *end) {
	while (beg != end)
		cout << *beg++ << " "; 
}
void print(const int arr[], size_t sz) { // the first parameter can also be 'const int *arr'
	for (decltype(sz) p=0; p!=sz; ++p) 
		cout << arr[p] << " "; 
}
// for c style string
void print(const char *pc) {
	if (pc) {
		while (*pc) 
			cout << *pc++ << " "; 
	}
}
int main(void) {
	int i = 0, j[2] = {0,1};
	print(i);
	print(&i);
	cout << endl; 

	print(begin(j), end(j));	
	cout << endl; 
	print(j, end(j) - begin(j));

	cout << endl; 
	// const char *cstr = "hello"; 
	// or
	const char cstr[] = "hello"; 
	print(cstr);
	cout << endl; 
	return 0;
}
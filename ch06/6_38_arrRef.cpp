#include <iostream>
using namespace std;

int odd[] = {1,3,5,7,9};
int even[] = {2,4,6,8,10};
decltype(odd) & arrRef(int i) {  
	return (i % 2) ? odd : even;
}

int main(void) {
	for (auto i : arrRef(2))
		cout << i << " "; 
	return 0;
}
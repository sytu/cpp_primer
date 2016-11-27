#include <iostream>
#include <vector>
#include <string>
using namespace std;
void PrintIVector(vector<int> v) {
	if (!v.empty())
		for (auto i : v) cout << i << " "; 
	else 
		cout << "empty"; 
    cout << endl;
}

void PrintIVectorByIterator(vector<int> v) {
	if (!v.empty())
		for (auto itr=v.begin(); itr!=v.end(); ++itr)
			cout << *itr << " "; 
	else 
		cout << "empty"; 
    cout << endl;
}

int main(void) {
	vector<int> ivec(10, 4);

	for (auto it=ivec.begin(); it!=ivec.end(); ++it)
		*it = *it * 2;

	PrintIVectorByIterator(ivec);  // => 8 8 8 8 8 8 8 8 8 8  

	return 0;
}
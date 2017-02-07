#include <iostream>
#include <cstring>

#define SZ 5

using namespace std;


int main(void) {
	char c;

	char *ca = new char[SZ];
	size_t i = 0;

	while (cin.get(c)) {
		if (isspace(c))
			break;
		ca[i++] = c;

		if (i == SZ) {
			cout << "Reach the maximum size." << endl; 
			break;
		}
	}

	ca[i] = 0; // c[i] = '\0'
	cout << ca << endl; 

	delete [] ca;
}
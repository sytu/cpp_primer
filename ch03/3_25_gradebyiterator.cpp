#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<int> scores(11,0);
	int grade;
	while (cin >> grade) {
		if (grade <= 100) {
			vector<int>::iterator it = scores.begin();
			it += grade/10;
			(*it)++;
		}
	}

	for (int i : scores)
		cout << i << endl; 
	return 0;
}
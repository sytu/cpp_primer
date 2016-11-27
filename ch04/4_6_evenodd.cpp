#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	int num;
	string ans;
	cout << "Enter a num" << endl; 
	cin >> num;
	// ans = (num % 2 == 0) ? "Even!" : "Odd..";
	ans = (num & 1) ? "odd" : "even";  // bitwise and.  the lowerest digit of an odd num in bianry is 1
	cout << ans << endl; 
	return 0;
}
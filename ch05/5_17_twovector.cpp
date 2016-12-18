#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPrefix(vector<int> const& lvec, vector<int> const& rvec) {
	if (lvec.size() > rvec.size()) return isPrefix(rvec, lvec);
	for (auto i=0; i!=lvec.size(); ++i) 
		if (lvec[i] != rvec[i]) return false;
	return true;
}
 
int main(void) {
	vector<int> lvec = {0,1,1,2,3,5,8};	
	vector<int> rvec = {0,1,1};	

	cout << (isPrefix(lvec, rvec) ? "Yep" : "No") << endl; 

	return 0;
}
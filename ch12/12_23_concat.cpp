#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	const char *c1 = "hello ", *c2 = "world.";
	
	char *ca = new char[strlen(c1) + strlen(c2) + 1];
	strcpy(ca, c1);
	strcat(ca, c2);
	cout << ca << endl; 

	const string s1 = "Hello ", s2 = "World.";
	strcpy(ca, (s1 + s2).c_str());
	cout << ca << endl; 

	delete [] ca;	
}
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
	char s1[] = "hello ";
	char s2[] = "world";
	// const unsigned sz = end(s1)-begin(s2) + (end(s2)-begin(s2));

	// char totalStr[100] = "";
	char *totalStr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(totalStr, s1);
	strcat(totalStr, s2);

	cout << totalStr << endl; 
	

	return 0;
}
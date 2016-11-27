#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<vector<int>> ivec;  // legal define a vector ivec of an int vector as its elemenot
	// vector对象 ivec 保存的元素是 int 型的 vector对象
	// vector<string> svec = ivec;  // illegal the type of element in svec is string but the type of the element in ivec is vector<int>
	// vector对象 svec 保存的元素是 string 型对象
	vector<string> svec(10, "null");  // legal  define a string vector svec that has 10 string "null" as its elements 
	return 0;
}
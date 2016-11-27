#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printPara(vector<string> text) {
	for (auto it=text.begin(); it!=text.end() && !it->empty(); ++it) {
		//把字符串中每个字符改为大写
		//method 1 使用范围for
		// for (auto & ch : *it)
			// ch = toupper(ch);
		//method 2 使用迭代器
		for (auto itr=(*it).begin(); itr!=(*it).end(); ++itr) 
			*itr = toupper(*itr);
	} 	
	for (auto it2=text.begin(); it2!=text.end(); ++it2)
		cout << *it2 << endl; 
}

int main(void) {
	vector<string> text = {"hello my name is pig.", "", "This is the second paragraph."};

	printPara(text);   
	return 0;
}
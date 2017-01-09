/*
	I: the quick red fox jump over the slow red turtle
	O: fox jump over quick red slow the turtle
*/
#include <iostream>
#include <algorithm>
#include <list>

using std::cout; using std::cin; using std::endl; 
using std::list; using std::string;

inline void Print(const list<string> &li) {
	for (auto i : li) 
		cout << i << " "; 
	cout << endl; 
}

void ElimDups(list<string> &ls) {
	Print(ls);
	ls.sort();
	ls.unique();
	Print(ls);
}

int main(void) {
	list<string> ls = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};		
	ElimDups(ls);
	cout << endl; 	
}
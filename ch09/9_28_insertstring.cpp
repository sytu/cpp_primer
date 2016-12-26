#include <iostream>
#include <string>
#include <forward_list>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::forward_list;

void insertString(forward_list<string> &fl, const string &to_find, const string &to_add) {
	auto curr = fl.begin();
	auto prev = fl.before_begin();
	while (curr != fl.end()) {
		if (*curr == to_find) {
			fl.insert_after(curr, to_add);
			return;
		} else {
			prev = curr++;
		}
	}
	fl.insert_after(prev, to_add);
}

void PrintFl(const forward_list<string> &fl) {
	for (auto const s : fl)
		cout << s << " ";
	cout << endl;	
}
int main(void) {
	forward_list<string> fl = {"HW:", "hello", "world"};	
	PrintFl(fl);
	string str1 = "hello";
	string str2 = "sytu's";
	insertString(fl, str1, str2);
	PrintFl(fl);
}
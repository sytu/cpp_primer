#include <iostream>
#include <map>
#include <string>

using std::cout; using std::cin; using std::endl; 
using std::multimap; using std::string;

void removeAuthor(multimap<string, string> &authors, const string &name) {
	auto range_it = authors.equal_range(name);
	if (range_it.first == range_it.second)
		cout << "No author" << name << endl; 
	else
		authors.erase(range_it.first, range_it.second);
}

int main(void) {
	multimap<string, string> authors = {{"James", "Love"}, {"James", "Hate"}, {"Stanley", "Balalala"}, {"Allen", "NBA"}, {"Allen", "ABC"}};
	
	removeAuthor(authors, "James");	
}
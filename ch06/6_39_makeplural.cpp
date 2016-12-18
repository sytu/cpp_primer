#include <iostream>
#include <string>
using namespace std;
inline string make_plural(size_t ctr, const string &word, const string &ending = "s") {
	return ctr > 1 ? word + ending : word;
}
int main(void) {
	cout << "singual: " << make_plural(1, "success", "es") << " "
		 			    << make_plural(2, "success", "es") << endl; 
	cout << "plural: " << make_plural(1, "failure") << " "
		 			    << make_plural(2, "failure") << endl; 
	// => singual: success successes
    //    plural: failure failures	 
	return 0;
}
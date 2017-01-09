// #include "make_plural.h"

string make_plural(size_t ctrl, const string &wd, const string &ending) {
	return ctrl > 1 ? wd + ending : wd;
}

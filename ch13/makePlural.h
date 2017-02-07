string makePlural(size_t ctrl, const string &str, const string &pfix) {
	return ctrl > 1 ? str + pfix : str;
}
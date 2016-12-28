#include <iostream>
#include <fstream>
#include <vector>

#define input_file "/Users/sytu/workspace/c++/C++_Primer/ch09/i_9_49.txt"

using std::cout; using std::cin; using std::endl; using std::cerr;
using std::vector;
using std::string; 
using std::ifstream;

void ReadFileToVector(const string &fileName, vector<string> &svec) {
	ifstream ifs(fileName);
	if (!ifs) 
        cerr << "No data?" << endl;
	string line;
	while (getline(ifs, line)) 
		svec.push_back(line);
}

string FindLongestMiddleWord(const vector<string> &svec) {
	string lst_word = "";
	unsigned max_sz = 0;
	string ascender = "bdfhijklt", descender = "gjpqy";
	for (size_t i = 0; i != svec.size(); ++i) {
		if (svec[i].find_first_of(ascender) == string::npos && svec[i].find_first_of(descender) == string::npos) {
			if (svec[i].size() > max_sz) {
				lst_word = svec[i];
				max_sz = lst_word.size();
			}
		}
	}
	return max_sz ? lst_word : "not found";
}

int main(void) {
	vector<string> wordvec;
	ReadFileToVector(input_file, wordvec);
	cout << FindLongestMiddleWord(wordvec) << endl; 	
}
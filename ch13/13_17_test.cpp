#include <iostream>

using namespace std;

class numbered {
public:
	// 13_14 => 0 0 0
	numbered() { mysn = seq++; }
	// 13_15 => 3 4 5
	numbered(const numbered&n) { mysn = seq++; }
	int mysn;
private:
	static int seq;
};

int numbered::seq = 0;

// void f(numbered s) { cout << s.mysn << endl; }
// 13_16 => 0 1 2
void f(const numbered &s) { cout << s.mysn << endl; }

int main(void) {
	numbered a, b = a, c = b;
	f(a); f(b); f(c);
}
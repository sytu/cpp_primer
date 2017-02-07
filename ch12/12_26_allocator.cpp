#include <iostream>
#include <memory>

#define SZ 10

using namespace std;


int main(void) {
	allocator<string> alloc;
	auto const p = alloc.allocate(SZ);
	string *q = p;
	string s;
	while (cin >> s && q != p + SZ) 
		alloc.construct(q++, s);

	const size_t size = q - p;

	for (size_t i=0; i<size; ++i)
		cout << p[i] << endl; 

	while (q != p)
		alloc.destroy(--q);

	alloc.deallocate(p, SZ);
}

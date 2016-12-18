#include "ch06.h"

int fact(int n) {
	return n == 1 ? 1 : n * fact(n - 1);
}
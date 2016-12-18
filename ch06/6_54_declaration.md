// 1
int func(int, int);


// 2
vector<int (*)(int, int)> pvec;

vector<decltype(func)*> pvec;

typedef int Func1(int, int);
vector<Func1*> pvec;
typedef int (*FuncP1)(int, int);
vector<Func1> pvec;

typedef decltype(func) Func2;
vector<func2*> pvec;
typedef decltype(func) *FuncP2;
vector<func2> pvec;

using Func3 = decltype(func);
vector<Func3*> pvec;
using FuncP3 = decltype(func)*;
vector<FunP3> pvec;

using Func4 = int(int, int);
using FuncP4 = int(*)(int, int);
vector<FuncP4> pvec;

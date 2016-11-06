//a.
decltype uses only the type of the expression
auto uses both the type and the value of the expression to infer the type of the object
auto will alter some features of the object. For example, it ignores the top-level const, keeps the low-level const.
While taking variable as expression, decltype will return different types to the object according to the existence of ().

//b.
int num = 10;
auto x = num;
decltype(num) y = num;
//both x and y are int

//c.
int num = 10;
auto x = num;
decltype((num)) y = num;
//x is an int. y is an int &, a reference that binds with an int.
const int cs = 99;
auto a = cs;  //a is int the top-level const is ignored
decltype(cs) b = cs; // b is const int 
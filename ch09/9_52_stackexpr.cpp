#include <iostream>
#include <stack>

using std::cout; using std::cin; using std::endl; using std::string; 
using std::stack;
using std::to_string;

int CalExpr(string str);

int main(void) {
	string s = "1+2*(80-10+6*10)"; // => 760
	stack<string> stk;
	size_t l = 0;
	for (size_t i=0; i!=s.size(); ++i) {
		if (s[i] == '(') {
			stk.push(s.substr(l, i + 1));
			l = i + 1;
		}
		if (s[i] == ')') {
			stk.pop();
			string expr = s.substr(l, i-l);
			stk.push(to_string(CalExpr(expr)));
		}
	}
	if (stk.empty())
		return -1;
	else 
		cout << stk.top() << endl; 
}

int CalExpr(string str) {
	int lval = 0, rval = 0;  // @workaround: - + unary operator haven't be implemented
	unsigned len_of_lexpr = 0;
	int res = 0;	
	char op;
	size_t op_index;
	while ((op_index = str.find_first_not_of("0123456789")) != string::npos) {
		lval = stoi(str);
		rval = stoi(str.substr(op_index + 1));
		len_of_lexpr = op_index + 1 + to_string(rval).size();
		op = str.substr(op_index,1)[0];
		switch (op) {
			case '+':
				res = lval + rval;
				break;
			case '-':
				res = lval - rval;
				break;
			case '*':
				res = lval * rval;
				break;
			case '/':
				res = lval / rval;
				break;
		}
		str.replace(0, len_of_lexpr, to_string(res));
	}
	return res;
}


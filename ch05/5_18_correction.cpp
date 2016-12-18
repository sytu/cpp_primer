//a.
do {
	int v1, v2;
	cout << "Please enter two numbers to sum:";
	if (cin >> v1 >> v2)
		cout << "Sum is " << v1 + v2 << endl; 
} while (cin);

//b.
int ival;
do {
	// ...
} while (ival = get_response()); //error: should not declare variable in the condition of a do while loop.

//c.
int ival;
do {
	ival = get_response();
} while (ival);  // error: the variable that is used in the condition should be declared before the do while loop.



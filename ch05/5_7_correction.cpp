//a.
if (ival1 != ival2) 
	ival1 = ival2;  // add semicolon at here
else ival1 = ival2 = 0;

//b.
if (ival < minval) {  // Braces needed to include both satetments in scope.
	minval = ival;
	occurs = 1;
}

//c.
if (int ival = get_value()) 
	cout << "ival = " << ival << endl; 
else if (!ival)  // Second if statement should be else-if.
	cout << "ival = 0\n";
// ival cannot be accessed outside the range of the if statement

//d.
if (ival == 0) // using == equality operator instead of using = assignment operator
	ival = get_value();

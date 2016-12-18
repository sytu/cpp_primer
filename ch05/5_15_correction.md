//a.
// error: ix cannot be used outside the for loop if it is defined inside of the for loop
int ix
for (ix=0; ix!=sz; ++ix) {/*....*/} 
if (ix != sz)
	//...

//b.
// error: have to leave a ; before condition of a for loop to represent an empty initiliazer
int ix;
for (;ix!=sz; ++ix) {/*...*/}

//c.
// error: as the result of the expression, condition ix!=sz will always be true. So the loop will never end.
for (int ix=0; ix!=sz; ++ix) {/*...*/}

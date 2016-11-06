Top-level const:
v2	p3	


Low-level const:
p2 r2

If i is defined an init variable, p3 is not a low-level const because the object i that pointer p3 points to is not a constant even though I couldn't find where the hell is the definition of i. 
If the definition of i does not exist, p3 is still a low-level const because it points to an unsure object that is certainly not a constant.
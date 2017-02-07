#include <iostream>
#include "13_19_employee.h"

int main(void) {
	Employee e1;	
	cout << "e1:" << endl; 
	cout << e1.getName() << endl; 
	cout << e1.getNum() << endl; 

	Employee e2("sytu");
	cout << "e2:" << endl; 
	cout << e2.getName() << endl; 
	cout << e2.getNum() << endl; 

	Employee e3 = e2;	
	cout << "e3:" << endl; 
	cout << e3.getName() << endl; 
	cout << e3.getNum() << endl; 

	Employee e4;
	e4 = e2;	
	cout << "e4:" << endl; 
	cout << e4.getName() << endl; 
	cout << e4.getNum() << endl; 


}
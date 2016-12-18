#include "Person.h"
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 

int main(void) {
	Person sytu;
	sytu.setName("stanley");
	sytu.setAddr("Beijing");
	cout << sytu.getName() << endl; 
	cout << sytu.getAddr() << endl; 
	
}
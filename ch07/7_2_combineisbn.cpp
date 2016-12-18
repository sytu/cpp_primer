#include <iostream>
//#include <vector>
//#include <string>
using namespace std;

struct Sales_data {
	// new member
	std::string isbn() const { return bookNo; }	
	Sales_data& combine(const Sales_data&);

	// old member
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

int main(void) {
	Sales_data total;
	Sales_data trans;
	total.bookNo = "h-nogi-1";
	total.units_sold = 10;
	total.revenue = 100;
	trans.bookNo = "h-akb-1";
	trans.units_sold = 10;
	trans.revenue = 80;

	cout << (total.combine(trans)).isbn() << endl << endl;
	
	cout << total.revenue << endl; // => 180 
	cout << total.units_sold << endl; // => 20

	cout << total.isbn() << endl; 
	cout << trans.isbn() << endl; 

	return 0;
}
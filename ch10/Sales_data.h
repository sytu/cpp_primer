#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; using std::istream; using std::ostream;

class Sales_data {
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
	// Sales_data() = default;
	// Sales_data(const string &s): bookNo(s) {}
	Sales_data(const string &s = ""): bookNo(s) {}
	Sales_data(const string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p) {}
	Sales_data(istream &is) { read(is, *this); }
	
	string isbn() const { return bookNo; }	
	Sales_data& combine(const Sales_data &rhs);

private:
	double avg_price() const;
	
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

// member function  defined outside for no-inline
Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
// private member function
inline double Sales_data::avg_price() const { return units_sold ? revenue/units_sold : 0; } 

// nonmember function
istream &read(istream &is, Sales_data &item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}
ostream &print(ostream &os, const Sales_data &item) {
	os << "BookNo: " << item.isbn() << " " << "UnitsSold: " << item.units_sold << " " 
	<< "Revenue: " << item.revenue << " " << "AveragePrice: " << item.avg_price();
	return os;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

#endif























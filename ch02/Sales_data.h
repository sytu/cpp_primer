#ifndef SALES_DATA_H_INCLUDED
#define SALES_DATA_H_INCLUDED

#include <iostream>
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double salePrice = 0.0; 
	double revenue = 0.0;
	double sellingPrice = 0.0; ////unconcerned yet
	double discount = 0.0;   //unconcerned yet
	void PrintData(){};         //unconcerned yet
};

#endif























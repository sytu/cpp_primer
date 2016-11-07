#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double salePrice = 0.0; 
	double revenue = 0.0;
	double sellingPrice = 0.0; ////unconcerned yet
	double discount = 0.0;   //unconcerned yet
	void PrintData(){};         //unconcerned yet
};
void PrintData(std::string bookNo, unsigned totalSold, double totalRevenue) {
	cout << "=>" << endl
	<< "ISBN        : " << bookNo << endl
	<< "totalSold   : " << totalSold << endl
	<< "totalRevenue: " << totalRevenue << endl;
	if (totalSold != 0) {
		cout << "averagePrice: " << totalRevenue / totalSold << endl << endl; 
	} else {
		cout << "0 units sold for the data." << endl << endl; 
	}
}
//
void PrintOneSales(Sales_data d) {
	cout << "Enter ISBN, salePrice, units_sold: " << endl; 
	cin >> d.bookNo >> d.salePrice >> d.units_sold;
	d.revenue = d.salePrice * d.units_sold;
	PrintData(d.bookNo, d.units_sold, d.revenue);
}
void SumTwoSales(Sales_data d1, Sales_data d2) {
	cout << "Enter ISBN, salePrice, units_sold of data1: " << endl; 
	cin >> d1.bookNo >> d1.salePrice >> d1.units_sold;
	d1.revenue = d1.salePrice * d1.units_sold;
	cout << "Enter ISBN, salePrice, units_sold of data2: " << endl; 
	cin >> d2.bookNo >> d2.salePrice >> d2.units_sold;
	d2.revenue = d2.salePrice * d2.units_sold;

	if(d1.bookNo == d2.bookNo) {
		unsigned totalSold = d1.units_sold + d2.units_sold;
		double totalRevenue = d1.revenue + d2.revenue;
		PrintData(d1.bookNo, totalSold, totalRevenue);
	} else {
		cout << endl << "Data must refer to the same ISBN." << endl; 
	}

}
void SumSeveralSales(Sales_data trans, Sales_data total) {
	cout << "Enter ISBN, salePrice, units_sold of data: " << endl; 
	if (cin >> trans.bookNo >> trans.salePrice >> trans.units_sold) {
		trans.revenue = trans.salePrice * trans.units_sold;
		unsigned totalSold = trans.units_sold;
		double totalRevenue = trans.revenue;
		while (cin >> total.bookNo >> total.salePrice >> total.units_sold) {
			total.revenue = total.salePrice * total.units_sold;
			if (total.bookNo == trans.bookNo) {
				totalSold += total.units_sold;
				totalRevenue += total.revenue;
			}
		}
		PrintData(trans.bookNo, totalSold, totalRevenue);
	} else {
		cout << "No correct data input." << endl; 
	}
}
void SumEachSales(Sales_data trans1, Sales_data trans2) {
	cout << "Enter ISBN, salePrice, units_sold of data: " << endl; 
	if (cin >> trans1.bookNo >> trans1.salePrice >> trans1.units_sold) {
		trans1.revenue = trans1.salePrice * trans1.units_sold;
		unsigned totalSold = trans1.units_sold;
		double totalRevenue = trans1.revenue;
		int num = 1;
		while (cin >> trans2.bookNo >> trans2.salePrice >> trans2.units_sold) {
			trans2.revenue = trans2.salePrice * trans2.units_sold;
			if (trans2.bookNo == trans1.bookNo) {
				totalSold += trans2.units_sold;
				totalRevenue += trans2.revenue;
				num ++;
			} else {
				PrintData(trans1.bookNo, totalSold, totalRevenue);
				cout << "NumOfData   : " << num << endl << endl; 
				trans1 = trans2;
				totalSold = trans2.units_sold;
				totalRevenue = trans2.revenue;
				num = 1;
			}
		}
		PrintData(trans1.bookNo, totalSold, totalRevenue);
		cout << "NumOfData   : " << num << endl << endl; 
	} else {
		cout << "No correct data input." << endl; 
	}
}

int main(void) {
	Sales_data d1, d2;
	// PrintOneSales(d1);
	// SumTwoSales(d1, d2);
	// SumSeveralSales(d1, d2);
	// SumEachSales(d1, d2);
	return 0;
}























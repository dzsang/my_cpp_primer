#include <iostream>
#include <string>
using namespace std;

//my own sales_data

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
	void CalcRevenue(double price);
	double CalcAverageprice();
	void SetData(Sales_data data);
	void AddData(Sales_data data);
	void Print();
};

void Sales_data::CalcRevenue(double price)
{
	revenue = units_sold * price;
}

void Sales_data::SetData(Sales_data data)
{
	bookNo = data.bookNo;
	units_sold = data.units_sold;
	revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
	if (bookNo != data.bookNo) return;
	units_sold += data.units_sold;
	revenue += data.revenue;
}

double Sales_data::CalcAverageprice()
{
	if (units_sold != 0)
		return revenue / units_sold;
	else
		return 0.0;
}

void Sales_data::Print()
{
	cout << bookNo << " " << units_sold << " " << revenue << " ";
	double avaragePrice = CalcAverageprice();
	if (avaragePrice != 0.0)
		cout << avaragePrice << endl;
	else 
		cout << "no sales " << endl;
}

































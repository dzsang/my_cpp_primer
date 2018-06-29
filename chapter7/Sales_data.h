#ifndef Sales_data_h
#define Sales_data_h

#include <iostream>
#include <string>
using namespace std;

//my own sales_data

class Sales_data {

	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream &read(istream&, Sales_data&);
	friend ostream &print(ostream&, const Sales_data&);

public:

	
	
//	Sales_data() = default;
//	Sales_data(const string &s): bookNo(s) { }
	Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) 
	{
		cout << "Sales_data(const std::string&, unsigned, double)" << endl;
	}
//	Sales_data(istream &);
//	Sales_data(istream &is);
    Sales_data() : Sales_data("", 0, 0.0f)
    {
        std::cout << "Sales_data()" << std::endl;
    }

    Sales_data(const string& s) : Sales_data(s, 0, 0.0f)
    {
        std::cout << "Sales_data(const std::string&)" << std::endl;
    }
    Sales_data(istream& is);
	


	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	
private:
	double avg_price() const
		{ return units_sold ? revenue/units_sold : 0;}
	
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};

Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
istream &read(istream& is, Sales_data& item);
ostream &print(ostream& os, const Sales_data& item);

//double Sales_data::avg_price() const{
//	if (units_sold)
//		return revenue/units_sold;
//	else 
//		return 0;
//}

/*
Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue 
	   << " " << item.avg_price();
	return os; 
}

Sales_data  add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

*/

//Sales_data::Sales_data(istream &is)
//{
//	read(is, *this);
//}









#endif



#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <initializer_list>
#include "Sales_data.h"
using namespace std;

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
			if (total.bookNo == trans.bookNo)
				total.AddData(trans);
			else {
				total.Print();
				total = trans;
			}
		}
		total.Print();
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	
	return 0;
}


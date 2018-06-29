#ifndef Person_h
#define Person_h


#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <initializer_list>
using namespace std;

class Person {

	friend istream &read(istream&, Person&);
	friend ostream &print(ostream&, Person&);
	
public:
	Person() = default;
	Person(const string sname, const string saddr): name(sname), address(saddr) { }
	explicit Person(istream &is) { read(is, *this);}

	string getName() const { return name; }
	string getAddress() const { return address; }
	
private:	
	string name;
	string address;
	
};

istream &read(istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

ostream &print(ostream &os, Person &person)
{
	os << person.name << person.address;
	return os;
} 













#endif 

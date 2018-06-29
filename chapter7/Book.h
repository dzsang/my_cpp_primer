#ifndef Book_h
#define Book_h


#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <initializer_list>
using namespace std;

class Book {
public:
//    Book() = default;
    Book(unsigned no, std::string name, std::string author, std::string pubdate) : no_(no), name_(name), author_(author), pubdate_(pubdate) { }
    Book(): Book(0, "", "", ""){ }
    Book(std::istream &in) :Book() { in >> no_ >> name_ >> author_ >> pubdate_; }

private:
    unsigned no_;
    std::string name_;
    std::string author_;
    std::string pubdate_;
};




#endif

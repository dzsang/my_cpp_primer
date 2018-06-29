#ifndef Debug_h
#define Debug_h



#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <initializer_list>
using namespace std;

class Debug {
public:
    constexpr Debug(bool b = true) : rt(b), io(b), other(b) {}
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), other(0) {}
    constexpr bool any() { return rt || io || other; }

    void set_rt(bool b) { rt = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool rt;    // runtime error
    bool io;    // I/O error
    bool other; // the others
};




#endif

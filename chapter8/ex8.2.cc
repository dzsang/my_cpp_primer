#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <initializer_list>
using namespace std;


istream& func(istream& is)
{
    string buf;
    while (is >> buf) cout << buf << endl;
    //is.clear();
    return is;
}

int main()
{
    istream& is = func(cin);
    cout << is.rdstate() << is.failbit << is.badbit << is.eofbit << is.goodbit << endl;
    
    is.clear(is.rdstate() & ~is.eofbit);
    cout << is.rdstate() << is.failbit << is.badbit << is.eofbit << is.goodbit << endl;
    return 0;
}


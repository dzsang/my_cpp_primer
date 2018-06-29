#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


istream& func(istream& is)
{
    string buf;
    while (is >> buf) cout << buf << endl;
    is.clear();
    return is;
}

int main()
{
    istringstream iss("Hello");
    func(iss);

    return 0;
}


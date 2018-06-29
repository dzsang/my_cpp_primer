#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool lessThanOrEqualTo(const string& s, string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    vector<string> authors{"Mooophy", "pezy", "Queequeg90", "shbling",
                                "evan617"};
    cout << count_if(authors.cbegin(), authors.cend(),
                          bind(lessThanOrEqualTo, _1, 6));
    cout << endl;
}

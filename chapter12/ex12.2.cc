#include "ex12_02.h"
#include <iostream>
using namespace std;

int main()
{
    const StrBlob csb{"hello", "world", "pezy"};
    StrBlob sb{"hello", "world", "Mooophy"};

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "pezy1";
    std::cout << sb.front() << " " << sb.back() << std::endl;
}

#include <iostream>

#include "ch06.h"
using namespace std;

int fact(int val)
{
    if (val == 0 || val == 1)
        return 1;
    else
        return val * fact(val - 1);
}

int func()
{
    int n, ret = 1;
    std::cout << "input a number: ";
    std::cin >> n;
    while (n > 1) ret *= n--;
    return ret;
}


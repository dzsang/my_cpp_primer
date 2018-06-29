#include <iostream>

using namespace std;

int fact(int val);
int fact2(int val);
int func();
size_t count_add(int n); 

template <typename T> 
T abs(T i)
{
    return i >= 0 ? i : -i;
}

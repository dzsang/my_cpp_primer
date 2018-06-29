#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> li)
{
	int sum = 0;
	for (auto i : li) sum += i;
	return sum;
}

int main()
{
	cout << sum({0,1,2,3,4,5,6,7,8,9,10}) << endl;
	return 0;
}


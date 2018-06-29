#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

void reset(int &i)
{
	i = 0;
}

int main()
{
	int i = 10;
	reset(i);
	cout << i <<endl;
	return 0;
}


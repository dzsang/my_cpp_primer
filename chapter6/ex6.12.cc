#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

void reset(int &i)
{
	i = 0;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void iswap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a,b;
	cin >> a >> b;
	swap(a,b);
	cout << a << " " << b << endl;
	iswap(&a,&b);
	cout << a << " " << b << endl;
	return 0;
}


#include <iostream>
#include <string>
#include <vector>
#include <iterator>


using namespace std;

int fact(int val)
{
	while (val > 1)
		return fact(val--) * val;
}


int main()
{

	int j = fact(5);
	cout << "5! is " << j << endl;

	return 0;
}


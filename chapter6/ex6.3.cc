#include <iostream>
#include <string>
#include <vector>
#include <iterator>


using namespace std;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int fact2 (int val)
{
	int ret = 1;
	if (val == 0 || val == 1) return 1;
	else return val * fact2(val - 1);
}

int main()
{
	time_t t1;  
	time(&t1);  
	int j = fact(5);
	cout << "5! is " << j << endl;
	time_t t2;  
	time(&t2); 
	cout << t1 << '\t' << t2 << "runtime is " << t2 - t1 << endl;
	
	time_t t3;  
	time(&t3);
	int i = fact2(5);
	cout << "5! is " << j << endl;
	time_t t4;  
	time(&t4); 
	cout << t3 << '\t' << t4 << "runtime is " << t4 - t3 << endl;
  
	return 0;
}


#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	while ( cin >> i ) ivec.push_back(i);
	if (ivec.empty())
	{
		cout << "Please input at least one integer!";
		return -1;
	}	
	else if (ivec.size() == 1)
		cout << *ivec.begin() << " has no adjacent elements!";
		
	for (auto it = ivec.begin(); it+1 != ivec.end(); ++it)
		cout << *it + *(it + 1) << " ";
	cout << endl ;
	
	for (auto beg = ivec.begin(), end = ivec.end() - 1; beg <= end; ++beg,--end)
		cout << *beg + *end << " ";
	cout << endl;
	return 0;
}


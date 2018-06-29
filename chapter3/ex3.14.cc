#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int i;
	while (cin >> i) vec.push_back(i);
	for(auto c : vec) cout << c;   
	cout << endl;
	return 0;
}


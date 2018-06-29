#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	vector<int> ivec(10);
	cout << "input 10 numbers:" << endl;
	for (auto &c : ivec) cin >> c;
	for (auto it = ivec.begin(); it != ivec.end(); ++it){
		*it = *it * 2;
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}


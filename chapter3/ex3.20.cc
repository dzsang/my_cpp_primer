#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	while (cin >> i)ivec.push_back(i);
	
	if (ivec.empty()) {
		cout << "input at least one integer" << endl;
		return -1;
	}
	else if (ivec.size() == 1) 
		cout << ivec[0] << "dont't have any adjacent elements";
	else
		for (decltype(ivec.size()) vi = 0; vi != ivec.size(); vi++){
			cout << ivec[vi] + ivec[vi + 1] << " ";
		}
	cout << endl;
	
	decltype(ivec.size()) size = ivec.size();
	if (size % 2 != 0)
		size = size / 2 + 1;
	else 
		size /= 2 ;
	for (decltype(ivec.size()) i = 0; i != size; ++i)
		cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
	cout << endl;
		
	return 0;
}


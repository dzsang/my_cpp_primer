#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> vec;
	string s;
	while (cin >> s) {
		vec.push_back(s);
		for (auto &c : s){
			c = toupper(c);
			cout << c;
		}
		cout << endl;
	}
	return 0;
}


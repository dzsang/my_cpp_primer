#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto &c : s){
		c = toupper(c);
	}
	cout << s << endl;
	return 0;
}


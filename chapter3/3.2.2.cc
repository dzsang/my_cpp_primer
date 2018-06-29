#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s)){
		if (!s.empty())
			cout << s << endl;
		else return 0;
	}
	return 0;
}


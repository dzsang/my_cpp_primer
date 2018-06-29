#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c, s;
	while (cin >> c){
		if (s.empty())
			s += c;
		else
			s = s + " " + c ;
	}

	cout << s << endl;
	return 0;
}


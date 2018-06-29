#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "input a string including punctuation." << endl;
	string s;
	while(cin >> s){
		for (auto c : s)
			if (!ispunct(c))
				cout << c;
		cout << endl;
	}
	return 0;
}


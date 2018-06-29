#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main()
{
	const char *c1 = "Hello ";
	const char *c2 = "world!";
	unsigned len = strlen(c1) + strlen(c2) + 1;
	char *r = new char[len]();
	strcat(r, c1);
	strcat(r, c2);
	cout << r << endl;
	
	string s1 = "Hello ";
	string s2 = "world!";
	unsigned len1 = s1.size() + s2.size();
	string *s = new string[len1]();
	s[0] = s1 + s2;
	cout << s[0] << endl;
	
	//string s = s1 + s2;
	//cout << s << endl;
	
	delete[] r;
}

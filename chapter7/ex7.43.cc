#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class NoDefault {
public:
	NoDefault(int i) {}
}

class C {
public:
	C() : def(0) {}
private:
	NoDefault def;
}



int main()
{
	C c;
	
	vector<C> vec(10);
	return 0;
}


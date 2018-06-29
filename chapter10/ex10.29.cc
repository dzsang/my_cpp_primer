#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>
#include <list>
#include <iterator>
using namespace std;

int main()
{
	ifstream ifs("CMakeLists.txt");
	istream_iterator<string> in(ifs), eof;
	vector<string> vec;
	copy(in, eof, back_inserter(vec));
	
	copy(vec.cbegin(), vec.cend(), ostream_iterator<string>(cout, "\n"));
	cout << endl;
	return 0;
}


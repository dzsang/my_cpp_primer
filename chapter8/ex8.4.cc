#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void ReadFileToVec(const string &fileName, vector<string> &vec)
{
	ifstream ifs(fileName);
	if (ifs) {
		string buf;
		while (getline(ifs, buf)) vec.push_back(buf);
	}
}

int main()
{
	vector<string> vec;
	ReadFileToVec("ex8.4.cc", vec);
	for (const auto &c : vec) cout << c << endl;
	return 0;
}


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>
#include <list>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>
#include <utility>
using namespace std;

int main()
{
	vector<pair<string, int>> vec;
	string s;
	int i;
	while (cin >> s >> i)
		vec.push_back(pair<string, int>(s,i));
		
		//vec.push_back(make_pair(s,i));
		//vec.push_back({s,i});
		//vec.emplace_back(s,i);   //!!! easiest way
		
	for (const auto &p : vec)
		cout << p.first << ":" << p.second << endl;
	return 0;
}


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
#include <sstream>

using namespace std;

map<string, string> buildmap(ifstream &map_file)
{
	map<string, string> trans_map;
	string key;
	string value;
	
	while (map_file >> key && getline(map_file, value))
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	return map_it == m.cend() ? s : map_it->second;
}

void word_transform(ifstream &map, ifstream &input)
{
	auto trans_map = buildmap(map);
	for (string text; getline(input, text);)
	{
		istringstream iss(text);
		for (string word; iss >> word;)
			cout << transform(word, trans_map) << " ";
		cout << endl;
	}
}

int main()
{
	ifstream ifs_map("word_transformation.txt"),
			 ifs_content("given_to_transform.txt");
	if (ifs_map && ifs_content)
		word_transform(ifs_map, ifs_content);
	else
		cerr << "can't find the documents." << endl;
	return 0;
}































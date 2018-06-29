#include "ex12_27.h"
#include <iostream>
using namespace std;

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}

int main()
{
	//ifstream file("storyDataFile.txt");
	//ifstream file("/home/sdz/Desktop/my_c++primer/chapter12/data/storyDataFile");
	ifstream file("./data/storyDataFile");
	runQueries(file);
	return 0;
}


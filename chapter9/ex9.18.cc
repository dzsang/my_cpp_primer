#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>
#include <list>
using namespace std;

int main()
{
    deque<string> input;
    for (string str; cin >> str; input.push_back(str))
        ;
    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << endl;
      
	return 0;
}


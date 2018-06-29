#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <queue>
#include <list>
using namespace std;

int main()
{
	list<int> li{0,1,2,3,4,5,6,7,8,9,10};
	deque<int> odd, even;
	for (auto i : li) 
		(i % 2 ? odd : even).push_back(i);
	
	cout << "odd: ";	
    for (auto i : odd) cout  << i << " ";
    cout << endl;
    cout << "even: ";
    for (auto i : even) cout  << i << " ";
    cout << endl;
	return 0;
}


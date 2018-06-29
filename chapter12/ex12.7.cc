#include <iostream>
#include <string>
#include <vector>
//#include <fstream>
//#include <queue>
//#include <list>
//#include <algorithm>
//#include <iterator>
//#include <map>
//#include <set>
//#include <utility>
#include <memory>
using namespace std;

shared_ptr<vector<int>> dynamic_vector_generator()
{
	return make_shared<vector<int>>();
}

void dynamic_vector_processor(shared_ptr<vector<int>> sptr_vi)
{
	int i;
	cout << "plz input:\n";
	while (cin >> i) sptr_vi->push_back(i);
}

void dynamic_vector_printer(const shared_ptr<vector<int>> sptr_vi)
{
	for (const auto &e : *sptr_vi)
		cout << e << " ";
		cout << endl;
}

int main()
{
	auto sptr = dynamic_vector_generator();
	dynamic_vector_processor(sptr);
	dynamic_vector_printer(sptr);

	return 0;
}


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

vector<int> *dynamic_vector_generator()
{
	vector<int> *ptr_vi = new vector<int>();
	return ptr_vi;
}

void dynamic_vector_processor(vector<int> *ptr_vi)
{
	int i;
	cout << "plz input:\n";
	while (cin >> i) ptr_vi->push_back(i);
}

void dynamic_vector_printer(vector<int> *ptr_vi)
{
	for (const auto &vi : *ptr_vi)
		cout << vi << " ";
		cout << endl;
}

int main()
{
	vector<int> *ptr = dynamic_vector_generator();
	dynamic_vector_processor(ptr);
	dynamic_vector_printer(ptr);
	
	delete ptr;
	return 0;
}


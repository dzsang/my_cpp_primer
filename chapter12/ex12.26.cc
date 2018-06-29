#include <iostream>
#include <string>
#include <memory>

using namespace std;

void ex12_26(int n)
{
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	string s;
	auto q = p;
	while (cin >> s && q != p + n)
		alloc.construct(q++, s);
	while (q != p)
	{	
		cout << *--q << " ";
		alloc.destroy(q);
	}
	alloc.deallocate(p, n);
}

int main()
{
	ex12_26(10);
	return 0;
}

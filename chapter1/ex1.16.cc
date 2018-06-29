#include <iostream>

int main()
{
	int sum = 0, val = 0, limit = 0;
	std::cout << "How many numbers would you like to enter?" << std::endl;
	std::cin >> limit;
	while(limit > 0)
	{
		std::cin >> val;
		sum += val;
		--limit;
	}
	std::cout << sum << std::endl;
	return 0;
}


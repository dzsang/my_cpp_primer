#include <iostream>

int main()
{
	int currVal = 0,val = 0;
	if (std::cin >> currVal)              
	{
		int cnt = 1;
		
		while (std::cin >> val)
		{
			if (val == currVal)			
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times 1 " << std::endl; 
				currVal = val;
				cnt = 1;
			}
		}
		
		std::cout << currVal << " occurs " << cnt << " times 2 " << std::endl; 
	}
	return 0;
}


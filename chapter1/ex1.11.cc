#include <iostream>

int main()
{
	std::cout << "Please input two integer!" << std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b ;
	if (a >= b){
		while (b <= a)
		{
			std::cout << b <<" ";
			++b;
		}
		std::cout << "\n" << std::endl;
	}
	else{
		while (a <= b)
		{
			std::cout << a << " ";
			++a;
		}
		std::cout << "\n" << std::endl;
	}
	return 0;
}


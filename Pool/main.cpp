#include <iostream>
#include "Pool.hpp"

int main()
{
	Pool<int, 10> p1;
	int* pointer1 = p1.get();
	*pointer1 = 8;
	std::cout << *pointer1 << '\n';
	std::cout << p1.getAvailable() << '\n';

	return 0;
}
#define MAX_UNIT16 65535
#define MAX(a,b)  (((a)>(b))?(a):(b))
#include <iostream>

int maia()
{
	std::cout << MAX_UNIT16 << std::endl;
	std::cout << MAX(10, 100) << std::endl;
}
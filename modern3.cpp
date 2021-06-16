#include <stdlib.h>
#include <iostream>
#include <memory>
#include<vector>

class Cat
{
public:
	Cat()
	{
		std::cout << "meow" << std::endl;
	};
	~Cat()
	{
		std::cout << "bye" << std::endl;
	};
private:
	int mAge;
};
int main()
{
	//C style heap Cat
	Cat* catp = (Cat*)malloc(sizeof(Cat));
	free(catp);

	//C style heap cats(cat array)
	Cat* catap = (Cat*)malloc(sizeof(Cat) * 5);
	free(catap);

	//C style heap int
	int* ip = (int*)malloc(sizeof(int));
	*ip = 100;
	free(ip);

	//C style heap array
	int* iap = (int*)malloc(sizeof(int) * 5);
	iap[0] = 100;
	free(iap);

	//C++ style heap Cat
	Cat* catp = new Cat;
	delete catp;

	//C++ style heap cats(cat array)
	Cat* catap = new Cat[5];
	delete[] catap;

	//C++ heap int
	int* ip = new int;
	delete ip;

	//C++ style heap array
	int* iap = new int[5];
	iap[0] = 100;
	delete[] iap;

	//safer C++ style heap Cat
	std::unique_ptr<Cat> catp = std::make_unique<Cat>();

	//safer C++ style heap Cats(Cat array)
	std::vector<Cat> cats(5);

	//safer C++ style heap int
	std::unique_ptr<int> ip = std::make_unique<int>();

	//safer C++ style heap array
	std::vector<int> ints(5);
	ints[0] = 100;

	//¿¹Á¦
	std::cout << "How many cats do u need?" << std::endl;
	int catCount;
	std::cin >> catCount;

	std::vector<Cat> cats(catCount);

	return 0;

}
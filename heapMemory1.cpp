#include <array>
#include <vector>
#include <iostream>

class Cat
{
public:
private:
	int m_age;
};

int main()
{
	Cat cat; //stack
	std::array <int, 100> catsStack;
	std::array<int, 300> a; //1.2kb
	std::vector<int>b(500000); //2mb (heap)
	std::vector<Cat> cats(100000);

	int count;
	std::cin >> count;
	std::vector<Cat>dynamicCats(count); //heap
}
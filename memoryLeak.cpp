#include<iostream>

int main()
{
	int allocCount = 0;
	std::cout << "how many?" << std::endl;
	std::cin >> allocCount;

	for (int i = 0; i < allocCount; i++)
	{
		int* ip = new int[250]; //1kb
		std::cout << "mem" << std::flush;
		delete[] ip;
	}//�޸� �Ҵ� ���ڸ��� �ٷ� ���� ���� �޸𸮻��� 0%

	return 0;
}
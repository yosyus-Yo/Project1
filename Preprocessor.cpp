#define ABCD 2
#include <iostream>

int main()
{

#ifdef ABCD //ABCD�� ���� �Ǿ��ִ�.
	std::cout << "1 : yes\n";
#else
	std::cout << "1: no\n";
#endif
//�������μ����� #else, #endif���� ����
#ifndef ABCD //ABCD�� ���� �Ǿ��ֱ� ������ ���� X
	std::cout << "2: no\n";
#elif ABCD == 2 //ABCD�� 2�̹Ƿ� �� �κ� ����
	std::cout << "2: yes\n";
#else // �� #elif ���� ����Ǿ����Ƿ� ���� x
	std::cout << "2: no2\n";
#endif
}
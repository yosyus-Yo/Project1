#define ABCD 2
#include <iostream>

int main()
{

#ifdef ABCD //ABCD가 정의 되어있다.
	std::cout << "1 : yes\n";
#else
	std::cout << "1: no\n";
#endif
//프리프로세서가 #else, #endif까지 정리
#ifndef ABCD //ABCD가 정의 되어있기 때문에 실행 X
	std::cout << "2: no\n";
#elif ABCD == 2 //ABCD는 2이므로 이 부분 실행
	std::cout << "2: yes\n";
#else // 위 #elif 에서 실행되었으므로 실행 x
	std::cout << "2: no2\n";
#endif
}
#include<iostream>

int main()
{
	//½ºÅÃ
	int sa = 0;
	int sb = 1;

	std::cout << "&sa : " << (long)&sa << std::endl;
	std::cout << "&sb : " << (long)&sb << std::endl;

	int* hap = new int;
	int* hbp = new int;

	std::cout << "&hap : " << (long)&hap << std::endl;
	std::cout << "&hbp : " << (long)&hbp << std::endl;
	//heap
	std::cout << "&ha : " << (long)hap << std::endl; 
	std::cout << "&hb : " << (long)hbp << std::endl;

	//prefer Smart pointer
	delete hap;
	delete hbp;

	return 0;
}
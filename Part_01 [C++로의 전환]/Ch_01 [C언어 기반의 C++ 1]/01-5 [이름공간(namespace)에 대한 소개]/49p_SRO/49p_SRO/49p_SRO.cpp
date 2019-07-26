#include <iostream>
int val = 100; // 전역 변수

int SimpleFunc(void)
{
	int val = 20; // 지역 변수
	val += 3; // 지역 변수 3 증가
	::val += 7; // 전역 변수 7 증가
	return val;
}

int main(void)
{
	std::cout << SimpleFunc() << std::endl; // 23
	std::cout << val << std::endl; // 107
	return 0;
}
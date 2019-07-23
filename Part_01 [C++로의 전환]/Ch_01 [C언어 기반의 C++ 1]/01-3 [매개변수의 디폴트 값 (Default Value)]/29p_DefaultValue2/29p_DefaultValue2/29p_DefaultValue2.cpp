﻿#include <iostream>
int Adder(int num1 = 1, int num2 = 2); // 디폴트 값은 함수의 선언 부분에만 표현하면 된다.

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}
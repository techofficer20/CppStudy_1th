#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl; // 3 (아무 인자도 없으므로 기본값인 1 + 2 출력)
	std::cout << Adder(5) << std::endl; // 7 (첫 번째 인자만 설정했으므로 5+ 2 출력) 왼쪽부터 채워져나간다.
	std::cout << Adder(3, 5) << std::endl; // 8 (모두 설정했으므로 3 + 5 출력)
	return 0;
}
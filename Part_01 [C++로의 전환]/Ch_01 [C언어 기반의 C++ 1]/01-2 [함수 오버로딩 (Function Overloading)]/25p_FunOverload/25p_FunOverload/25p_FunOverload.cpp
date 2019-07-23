/*
C언어에서의 함수 호출과 C++에서의 함수 호출 방식은 다르다.
C언어는 '함수의 이름', '매개변수의 선언'을 이용해 함수를 구분하고,
C++는 '함수의 이름'만 가지고 함수를 구분한다.
그렇기 때문에, 같은 이름의 함수를 여러 개 사용할 수 있다. 단, 자료형이나 인자의 갯수가 달라야 한다.
이를 함수의 오버로딩이라 한다.
그런데, void MyFunc(int n), int MyFunc(int n)은 오류가 발생한다. 반환형은 함수 호출 시, 호출되는 함수를 구분하는 기준이 될 수 없다.
*/
#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}
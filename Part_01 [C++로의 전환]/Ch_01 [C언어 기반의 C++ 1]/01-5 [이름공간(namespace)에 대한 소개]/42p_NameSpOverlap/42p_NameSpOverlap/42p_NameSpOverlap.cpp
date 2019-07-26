#include <iostream>

namespace Parent
{
	int num = 2;
	
	namespace SubOne // 이름공간은 중첩이 가능하다. 따라서 계층적 구조를 갖게끔 이름공간을 구성할 수 있다.
	{
		int num = 1;
	}

	namespace SubTwo
	{
		int num = 4;
	}
}
int main(void)
{
	std::cout << Parent::num << std::endl;
	std::cout << Parent::SubOne::num << std::endl;
	std::cout << Parent::SubTwo::num << std::endl;
}
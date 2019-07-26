#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc; 
	// 너무 빈번한 using namespace의 선언은 이름의 충돌을 막기 위한 이름공간의 선언을 의미 없게 만든다. 제한 필요.
	HybFunc();
	return 0;
}
﻿#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}
// 선언된 이름공간의 이름이 동일하다면, 이 둘은 동일한 이름공간으로 간주된다.
namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();	// 동일 이름공간에 정의된 함수를 호출할 때는 이름공간을 명시할 필요가 없다.
	ProgComImpl::SimpleFunc();	// 다른 이름공간
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
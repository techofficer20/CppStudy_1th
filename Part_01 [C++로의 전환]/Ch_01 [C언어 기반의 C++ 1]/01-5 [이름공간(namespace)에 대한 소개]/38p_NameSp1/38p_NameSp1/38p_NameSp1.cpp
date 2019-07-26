/*
프로젝트의 진행에 있어서 발생할 수 있는 이름의 충돌을 막을 목적으로 존재하는 것이 이름공간이다.
존재하는 이름공간이 다르면 동일한 이름의 함수 및 변수를 선언하는 것이 가능하다.
*/
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc(); // BestComImpl 공간에 있는 SimpleFunc 함수를 호출하겠다
	ProgComImpl::SimpleFunc(); // ProgComImpl 공간에 있는 SimpleFunc 함수를 호출하겠다
	// ::는 "범위지정 연산자"라 하며, 이름공간을 지정할 때 사용하는 연산자이다.
	return 0;
}
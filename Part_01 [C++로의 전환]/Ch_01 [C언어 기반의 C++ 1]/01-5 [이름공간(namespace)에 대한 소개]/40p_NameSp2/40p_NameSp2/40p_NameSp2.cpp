// 함수의 선언은 헤더파일에, 함수의 정의는 소스파일에 저장하도록..

#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
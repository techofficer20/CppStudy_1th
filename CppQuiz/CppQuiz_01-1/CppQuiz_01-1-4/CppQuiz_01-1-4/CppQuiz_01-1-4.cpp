/* 
판매원들의 급여 계산 프로그램을 작성해보자.
이 회사는 모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
예를 들어서 민수라는 친구의 이번 달 물품 판매 금액이 100만원이라면, 50+100X0.12=62, 따라서 62만원을 급여로 지급 받는다.
단, 아래의 실행의 예에서 봉듯이 이러한 급여의 계산은 -1이 입력될 때까지 계속 되어야 한다.
판매 금액을 만원 단위로 입력(-1 to end): 100
이번 달 급여: 62만원
판매 금액을 만원 단위로 입력(-1 to end): 200
이번 달 급여: 74만원
판매 금액을 만원 단위로 입력(-1 to end): -1
프로그램을 종료합니다.
*/

#include <iostream>

int main(void)
{
	int income;
	int default_income = 50;
	int result;

	std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
	std::cin >> income;

	if (income == -1) // 처음 입력받은 수가 바로 -1이면 종료한다.
	{
		std::cout << "프로그램을 종료합니다.";
		return 0;
	}
	else
	{
		while (income != -1)
		{
			while (income <= 0) // -1은 아닌데 0 이하이면 다시 입력하도록
			{
				std::cout << "양수를 입력하시오" << std::endl;
				std::cin >> income;
			}

			income = income * 0.12; // int형이기 때문에 소수점은 잘라진다.
			result = default_income + income; // int형이기 때문에 소수점은 잘라진다.
			std::cout << "이번 달 급여: " << result << "만원" << std::endl;
			std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
			std::cin >> income;
		}

		std::cout << "프로그램을 종료합니다."; // -1이 입력된 것이므로 종료
		
		return 0;
	}
}
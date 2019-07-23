#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1; // c++에서 데이터 입력에는 std::cin이 필요
	// 입력과 출력 시의 화살표 방향 헷갈리지 않도록 하기
	// c++에서는 변수의 선언이 어디에서든 가능하다.
	// 실수형 데이터를 입력받으려면? 변수 선언 시에 double로 변경하기만 하면 된다.
	// c++에서는 데이터의 입력도 데이터의 출력과 마찬가지로 별도의 포맷 지정이 필요 없다.
	// 문자열 선언 시에도 마찬가지이다.
	// char str[100];
	// std::cin>>str;
	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}
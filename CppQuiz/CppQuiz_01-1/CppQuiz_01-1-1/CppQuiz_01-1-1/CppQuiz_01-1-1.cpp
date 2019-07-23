/* 
사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해보자. 단, 프로그램의 실행은 다음과 같이 이루어져야 한다.
1번째 정수 입력: 1
2번째 정수 입력: 2
3번째 정수 입력: 3
4번째 정수 입력: 4
5번째 정수 입력: 5
합계: 15
*/

#include <iostream>

int main(void)
{
	int num;
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> num; // 입력을 받고 나면 자동으로 줄 바꿈이 된다.
		result += num;
	}

	std::cout << "합계: " << result;

	return 0;
}
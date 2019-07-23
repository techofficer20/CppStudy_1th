// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력받은 데이터를 그대로 출력하는 프로그램을 작성해보자.

#include <iostream>

int main(void)
{
	char name[10];
	char phone[12];

	std::cout << "이름 입력: ";
	std::cin >> name;
	std::cout << "전화번호 입력 (- 제외): ";
	std::cin >> phone;
	std::cout << "이름은 " << name << " 전화번호는 " << phone;

	return 0;
}
#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다.\n";
	// '\n'과 같은 특수문자는 C언어에서와 같은 의미를 지닌다. 다만 std::endl로 개행의 역할을 대신할 뿐이다.
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
	return 0;
}
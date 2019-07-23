#include <iostream> // 헤더 파일 선언

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl; // endl: endline. c언어에서의 개행
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}
// std::cout과 << 연산자를 이용한 출력
// 출력 형태: std::cout << '출력대상';

// << 연산자를 이용한 출력대상의 연이은 표현과 개행
// std::cout << '출력대상1' << '출력대상2' << '출력대상3';

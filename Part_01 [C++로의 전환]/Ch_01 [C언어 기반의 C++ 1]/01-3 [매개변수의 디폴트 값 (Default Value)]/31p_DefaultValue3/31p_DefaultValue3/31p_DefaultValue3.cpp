#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1); 
/*
부분적으로 디폴트 값을 설정 할 수 있다.
그런데, (int length = 1, int width, int height) 과 같이는 설정할 수 없다.
함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워지기 때문이다.
*/
int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl; // 27
	std::cout << "[5, 5, 0] : " << BoxVolume(5, 5) << std::endl; // 25
	std::cout << "[7, 0, 0] : " << BoxVolume(7) << std::endl; // 7
	// std::cout << "[0, 0, 0] : " << BoxVolume() << std::endl; 모든 매개변수에 디폴트 값이 지정된 것이 아니기 때문에 컴파일 에러
	return 0;
}
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
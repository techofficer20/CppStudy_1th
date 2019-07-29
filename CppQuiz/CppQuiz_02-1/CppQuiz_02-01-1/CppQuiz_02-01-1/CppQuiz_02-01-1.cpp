/*
참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라.
- 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
- 인자로 전달된 int형 변수의 부호를 바꾸는 함수
그리고 위의 각 함수를 호출하여 그 결과를 확인하는 main 함수까지 작성하여라.
*/
#include <iostream>
using namespace std;

int AddFunc(int& number)
{
	number += 1;

	return number;
}

int ChangeFunc(int& number2)
{
	number2 *= -1;

	return number2;
}

int main(void)
{
	int num = 10;
	cout << "before num: " << num << endl;
	num = AddFunc(num);
	cout << "after num: " << num << endl;

	int num2 = 20;
	cout << "before num2: " << num2 << endl;
	num2 = ChangeFunc(num2);
	cout << "after num2: " << num2 << endl;

	return 0;
}
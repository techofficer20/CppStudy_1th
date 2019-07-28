#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int& num2 = num1; // 선언부에 &를 붙이면 주소값을 의미하는 게 아니라 '참조자'를 의미함.

	num2 = 3047;

	cout << "VAL: " << num1 << endl; 
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl; // 선언된 이후 &를 붙이면 주소값 의미
	cout << "REF: " << &num2 << endl;

	return 0;
}
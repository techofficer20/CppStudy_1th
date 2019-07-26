#include <iostream>
using namespace std;
/*
이름공간 std에 선언된 것은 std라는 이름공간의 선언없이 접근하겠다는 선언
이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략을 명령할 수 있다.
너무 빈번한 using namespace의 선언은 이름의 충돌을 막기 위한 이름공간의 선언을 의미 없게 만든다. 제한 필요
*/
int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}
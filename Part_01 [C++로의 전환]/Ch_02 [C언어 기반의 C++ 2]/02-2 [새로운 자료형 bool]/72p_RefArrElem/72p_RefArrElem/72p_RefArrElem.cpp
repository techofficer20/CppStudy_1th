#include <iostream>
using namespace std;
/*
참조자의 선언 가능 범위
상수를 대상으로 참조자를 선언할 수는 없다.
미리 참조자를 선언했다가, 후에 누군가를 참조하는 것은 불가능하다. 참조의 대상을 바꾸는 것도 불가능하다.
참조자를 선언하면서 NULL로 초기화하는 것도 불가능하다.
*/
int main(void)
{
	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num; // num을 가리키는 포인터 변수 ptr
	int** dptr = &ptr; // 포인터 ptr을 가리키는 더블 포인터 변수 dptr

	int& ref = num; // num의 참조자 ref
	int* (&pref) = ptr; // 포인터 ptr의 참조자 포인터 pref
	int** (&dpref) = dptr; // 더블 포인터 dptr의 참조자 더블 포인터 dpref

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	// 포인터의 경우에는 참조 대상의 포인터 기호 붙일 것
	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl; // 1
	cout << "false: " << false << endl; // 0
	// 참과 거짓을 위한 1바이트 크기의 데이터일 뿐, 실제 1과 0은 아니다. 굳이 숫자에 연결시키려 하지 말자.

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
		cout << endl;

		cout << "sizeof 1: " << sizeof(1) << endl;
		cout << "sizeof 0: " << sizeof(0) << endl;
		cout << "sizeof true: " << sizeof(true) << endl;
		cout << "sizeof false: " << sizeof(false) << endl;
		return 0;
}
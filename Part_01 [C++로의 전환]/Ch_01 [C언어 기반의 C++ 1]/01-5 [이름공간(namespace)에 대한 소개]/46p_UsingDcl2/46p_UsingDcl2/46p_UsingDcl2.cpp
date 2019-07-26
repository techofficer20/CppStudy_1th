#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// 이후부터 cin, cout, endl은 std::cin, std::cout, std::endl을 의미한다는 선언

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}
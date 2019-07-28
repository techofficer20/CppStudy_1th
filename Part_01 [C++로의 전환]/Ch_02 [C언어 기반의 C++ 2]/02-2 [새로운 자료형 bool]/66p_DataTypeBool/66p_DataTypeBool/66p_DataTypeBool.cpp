#include <iostream>
using namespace std;

bool IsPositive(int num)
{
	if (num <= 0) 
		return false;
	else
		return true;

	// true와 false를 가리켜 bool형 데이터라 한다. 그리고 bool은  int, double과 마찬가지로 기본자료형이다.
}

int main(void)
{
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num); // isPos에 IsPositive(num) 리턴값을 저장
	if (isPos) // true로 반환받았을 경우
		cout << "Positive number" << endl;
	else // false로 반환받았을 경우
		cout << "Negative number" << endl;

	return 0;
}
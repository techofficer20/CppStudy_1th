﻿#include <iostream>
using namespace std;

class Point
{
public:
	int x; // x좌표의 범위는 0이상 100이하
	int y; // y좌표의 범위는 0이상 100이하
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "좌 상단: " << "[" << upLeft.x << ", ";
		cout << upLeft.y << "]" << endl;
		cout << "우 하단: " << "[" << lowRight.x << ", ";
		cout << lowRight.y << "]" << endl;
	}
};

int main(void)
{
	Point pos1 = { -2, 4 }; // 오류1: 범위 벗어남
	Point pos2 = { 5, 9 };
	Rectangle rec = { pos2, pos1 }; // 오류2: pos2와 pos1의 위치 뒤바뀜
	rec.ShowRecInfo();
	return 0;
}
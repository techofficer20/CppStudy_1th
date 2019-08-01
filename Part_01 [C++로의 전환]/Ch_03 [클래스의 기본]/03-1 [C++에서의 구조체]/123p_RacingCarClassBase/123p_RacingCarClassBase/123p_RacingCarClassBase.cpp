#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FULL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private: // private: 클래스 내(클래스 내에 정의된 함수)에서만 접근허용
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public: // public: 어디서든 접근허용
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

	/*
	클래스를 구성하는 (클래스 내에 선언된) 변수를 가리켜 '멤버변수'라 하고,
	클래스를 구성하는 (클래스 내에 선언된) 함수를 가리켜 '멤버함수'라 한다.
	*/
};

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FULL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99; // 클래스는 기본적으로 별도의 선언을 하지 않으면 클래스 내에 선언된 변수는 클래스 내에 선언된 함수에서만 접근 가능하다.
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}
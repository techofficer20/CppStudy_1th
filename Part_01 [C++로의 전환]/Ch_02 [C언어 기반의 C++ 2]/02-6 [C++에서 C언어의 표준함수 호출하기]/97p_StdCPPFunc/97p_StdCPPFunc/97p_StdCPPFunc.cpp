#define _CRT_SECURE_NO_WARNINGS
#include <cmath> // math.h
#include <cstdio> // stdio.h
#include <cstring> // string.h
using namespace std; // 모든 표준함수들이 이름공간 std 안에 선언되어 있다.

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	
	return 0;
}
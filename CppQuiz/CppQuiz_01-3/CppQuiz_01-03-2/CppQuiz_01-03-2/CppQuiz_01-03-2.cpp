/*
다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자.
int SimpleValue(int a = 10)
{
	return a + 1;
}

int SimpleValue(void)
{
	return 10;
}
*/
// 첫 번째 함수는, 인자가 아무것도 주어지지 않았을 때 자동으로 a에 10을 배정해서 11을 리턴하는 것이다.
// 즉 SimpleValue() 이렇게 호출하면 두 함수가 충돌한다.
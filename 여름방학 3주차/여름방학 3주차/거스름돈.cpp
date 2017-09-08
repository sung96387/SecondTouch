#include <iostream>
using namespace std;

int main()
{
	int money = 0;
	int cnt = 0;
	cin >> money;
	money = 1000 - money; //  거스름돈 구하기
	while (money >= 500)
	{
		cnt += money / 500; // 거스름돈 500 나눠서 몫 계산
		money %= 500; // 나머지 구해서 밑에 것도 동일 연산
	}
	while (money >= 100)
	{
		cnt += money / 100;
		money %= 100;
	}
	while (money >= 50)
	{
		cnt += money / 50;
		money %= 50;
	}
	while (money >= 10)
	{
		cnt += money / 10;
		money %= 10;
	}
	while (money >= 5)
	{
		cnt += money / 5;
		money %= 5;
	}
	while (money >= 1)
	{
		cnt += money / 1;
		money %= 1;
	}
	cout << cnt << '\n';

	return 0;
}



}
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int fac = 1;
	cin >> num;
	if (num < 13)
	{
		for (int i = num; i >= 1; i--) 
		{
			fac *= i;
		}
	}
	else
	{
		cout << "숫자를 잘못입력하셨습니다." << endl;
	}
	cout << fac << endl;
	return 0;
}
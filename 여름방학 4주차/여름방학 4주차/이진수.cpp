#include <iostream>
using namespace std;
int main()
{
	int n,T;
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (int i = 0; i < 30; i++)
		{
			if (n & (1 << i)) //2의 제곱수가 입력받은 수 내에 있다면
			//비트마스크 사용
			{
				cout << i << ' ';
			}
		}
	}
	cout << endl;
	return 0;
}
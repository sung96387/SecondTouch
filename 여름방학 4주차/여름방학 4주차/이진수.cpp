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
			if (n & (1 << i)) //2�� �������� �Է¹��� �� ���� �ִٸ�
			//��Ʈ����ũ ���
			{
				cout << i << ' ';
			}
		}
	}
	cout << endl;
	return 0;
}
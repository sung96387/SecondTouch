#include <iostream>
using namespace std;

int main()
{
	int Test;
	int size;
	int num;
	int sum =0;
	cout << "�׽�Ʈ ���̽��� �Է��ϼ��� : ";
	cin >> Test;
	for (int i = 0; i < Test; i++)
	{
		cout << "�ڿ��� ������ �Է��ϼ��� : ";
		cin >> size;
		for (int j = 0; j < size; j++)
		{
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
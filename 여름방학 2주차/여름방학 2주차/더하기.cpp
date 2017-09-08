#include <iostream>
using namespace std;

int main()
{
	int Test;
	int size;
	int num;
	int sum =0;
	cout << "테스트 케이스를 입력하세요 : ";
	cin >> Test;
	for (int i = 0; i < Test; i++)
	{
		cout << "자연수 갯수를 입력하세요 : ";
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
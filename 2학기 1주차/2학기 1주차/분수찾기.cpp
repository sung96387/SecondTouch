#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int temp1 = 0;
	int temp2 = 0;
	for (size_t i = 1; i < num; i++)
	{
		temp1 += i;
		if (num<=temp1)
		{
			temp2 = temp1 - i;
			num -= temp2;
			temp1 = i;
			break;
		}
	}
	if (temp1 % 2 == 0)
		cout << num << "/" << temp1 + 1 - num;
	else
		cout << temp1 - num + 1 << "/" << num;
	return 0;
}
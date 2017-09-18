#include <iostream>
#include <string>
using namespace std;

int main()
{
	char aArray[5][15] = { 0 };

	for (size_t i = 0; i < 5; i++)
	{
		cin >> aArray[i];
	}

	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (isalpha(aArray[i][j]) ||
				(aArray[i][j] >= 48
					&& aArray[i][j] <= 57))
			{
				cout << aArray[i][j];
			}
			else
				continue;
		}
	}

	return 0;
}
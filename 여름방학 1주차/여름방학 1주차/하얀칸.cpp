#include <iostream>
using namespace std;

int main()
{
	char chess[8][8];
	int white = 0;

	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			cin >> chess[i][j];
			if (chess[i][j] == 'F')
			{
				if (i % 2 == 0 && j % 2 == 0)
					white++;
				else if (i % 2 == 1 && j % 2 == 1)
					white++;
			}
		}
	}
	cout << white << endl;
	return 0;
}

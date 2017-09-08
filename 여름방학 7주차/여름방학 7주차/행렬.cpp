#include <iostream>
#include <string>
using namespace std;



int aArray[51][51];
int bArray[51][51];

void changeA(int x, int y)
{
	for (int i = x; i < x + 2; ++i)
	{
		for (int j = y; j < y + 2; ++j)
		{
			aArray[i][j] = 1 - aArray[i][j];
		}
	}
}
int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{

		for (size_t j = 0; j < b; j++)
		{
			cin >> aArray[i][j];
		}
	}
	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			cin >> bArray[i][j];
		}

	}
	int count = 0;
	for (size_t i = 0; i < a-2; i++)
	{
		for (size_t j = 0; j < b-2; j++)
		{
			if (aArray[i][j] != bArray[i][j])
			{
				changeA(i, j);
				count++;
			}
			}

	}

	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < b; j++)
		{
			if (aArray[i][j] != bArray[i][j])
			{
				cout << "-1";
				return 0;
			}
		}

	}
	cout << count << endl;

}
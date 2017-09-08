#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int Scorearray[8];
	int HighScore[5];
	int sum = 0;
	for (size_t i = 0; i < 8; i++)
	{
		cin >> Scorearray[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		int High = -100;
		int number = 0;
		for (size_t j = 0; j < 8; j++)
		{
			if (Scorearray[j] > High)
			{
				High = Scorearray[j];
				number = j;
			}
		}
		sum += High;
		Scorearray[number] = -100;
		HighScore[i] = number + 1;
	}
	sort(HighScore, HighScore + 5);
	cout << sum << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << HighScore[i] << ' ';
	}
}
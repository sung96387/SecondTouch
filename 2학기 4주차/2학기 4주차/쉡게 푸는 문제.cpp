#include <iostream>
using namespace std;

int main()
{
	long int Aarray[1000];
	int num = 1;
	int First, End;
	int now=0, result = 0;
	cin >> First >> End;
	for (size_t i = 0; now < 1000; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			Aarray[now++] = num;
			if (now == 1000)
				break;
		}
		num++;
	}
	for (size_t i = First-1; i <= End-1; i++)
	{
		result += Aarray[i];
	}
	cout << result << endl;
	return 0;
}
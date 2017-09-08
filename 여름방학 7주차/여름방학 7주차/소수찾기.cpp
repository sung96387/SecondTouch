#include <iostream>
using namespace std;

int main()
{
	int N, num;
	int prime = 0;
	int check = 0;
	cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		check = 0;
		cin >> num;
		for (size_t j = 2; j <= num; j++)
		{
			
			if (num%j == 0)
			{
				check++;
				if (check >= 2)
					break;
			}
		}
			if (check == 1)
			prime++;
	}
	cout << prime;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int num, count = 0;
	int sum = 0;
	string OX;

	cin >> num;
	vector<int>Array(num);
	for (size_t i = 0; i < num; i++)
	{
		cin >> OX;
		for (size_t j = 0; j < OX.size(); j++)
		{
			if (OX[j] == 'O')
			{
				count++;
				sum += count;
			}
			else if (OX[j] == 'X')
			{
				count = 0;
			}
		}
		Array[i] = sum;
		sum = 0;
		count = 0;
	}
	for (size_t i = 0; i < num; i++)
	{
		cout << Array[i] << endl;
	}
}
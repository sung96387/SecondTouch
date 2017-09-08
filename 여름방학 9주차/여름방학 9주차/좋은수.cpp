#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<int>Array(num);
	bool ab[400000];
	for (size_t i = 0; i < num; i++)
	{
		cin >> Array[i];
	}
	int count = 0;
	for (size_t i = 0; i < num; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (ab[Array[i]-Array[j]+200000])		
			{
				count++;
				break;
			}
		}
		for (int j = 0; j <= i; j++)
		{
			ab[Array[i] + Array[j] + 200000] = 1;

		}
	}
	cout << count;
}
#include <iostream>
using namespace std;

int main()
{
	int student[31] = { 0 };
	int n;

	for (size_t i = 1; i < 29; i++)
	{
		cin >> n;
		student[n] = 1;
	}
	for (size_t i = 1; i < 31; i++)
	{
		if (student[i] ==0)
		{ 
			cout << i << endl;

		}
	}

	return 0;
}
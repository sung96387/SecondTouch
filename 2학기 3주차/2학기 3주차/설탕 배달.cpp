#include <iostream>
using namespace std;

int main()
{
	int N, five, three,temp = 0;
    cin >> N;

	five = N / 5;
	temp = N % 5;
	while (five >= 0)
	{
		temp = N - five * 5;
		three = temp / 3;
		if (temp % 3 == 0)
			break;
		--five;
	}
	if (N != five * 5 + three * 3)
	{
		cout << "-1" << endl;
	}
	else
		cout << three + five << endl;
	
	return 0;
}

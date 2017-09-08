#include <iostream>
#include <string>
using namespace std;

int main()
{
	string X, Y;
	cin >> X >> Y;
	int blank;
	int min=100;
	for (size_t i = 0; i <= Y.length()-X.length(); i++)
	{
		blank = 0;
		for (size_t j = 0; j < X.length(); j++)
		{
			if (X[j] != Y[i + j])
				blank++;
		}
		if (min > blank)
			min = blank;
	}
	cout << min;
	
	return 0;
}
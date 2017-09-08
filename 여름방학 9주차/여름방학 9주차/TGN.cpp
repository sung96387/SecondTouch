#include <iostream>
using namespace std;

int main()
{
	int Test;
	int r, e, c;

	cin >> Test;
	for (size_t i = 0; i < Test; i++)
	{
		cin >> r >> e >> c;
		if ((r+c) == e)
		{
			cout << "does not matter" << endl;
		}
		else if ((r+c) < e)
		{
			cout << "advertise" << endl;
		}
		else if ((r+c) > e)
		{
			cout << "do not advertise" << endl;
		}
	}


	return 0;
}
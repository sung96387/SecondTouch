#include <iostream>
using namespace std;

int main()
{
	int L, P, newspaper;
	cin >> L >> P;
	for (size_t i = 0; i < 5; i++)
	{
		cin >> newspaper;
		cout << newspaper - L*P << ' ';

	}
	cout << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	a = ((a % 10) * 100) + (((a / 10) % 10) * 10) + (a / 100);
	b = ((b % 10) * 100) + (((b / 10) % 10) * 10) + (b / 100);
	cout << ((a > b ? a : b));
	return 0;
}
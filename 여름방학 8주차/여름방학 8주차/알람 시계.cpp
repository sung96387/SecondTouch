#include <iostream>
using namespace std;

int main()
{
	int Hour, Minute;
	cin >> Hour >> Minute;
	if (Hour == 0)
	{
		Hour += 24;
	}
	int Time = Hour * 60 + Minute - 45;
	if (Time / 60 == 24)
		cout << '0' << ' ' << Time % 60;
	else
		cout << Time / 60 << ' ' << Time % 60;


	return 0;
}
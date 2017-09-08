#include <iostream>
using namespace std;
int main() 
{
	int aArray[3][2];
	int x, y = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cin >> aArray[i][j];
	x = aArray[0][0];
	y = aArray[0][1];
	x = aArray[1][0] == x ? aArray[2][0] : 
		(aArray[1][0] == aArray[2][0] ? x : aArray[1][0]);
	y = aArray[1][1] == y ? aArray[2][1] : 
		(aArray[1][1] == aArray[2][1] ? y : aArray[1][1]);
	cout << x << ' ' << y;
}

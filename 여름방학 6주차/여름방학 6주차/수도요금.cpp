#include <iostream>
using namespace std;

int main() 
{
	int Bill, Base , Max, AddBill, Amount = 0;
	int x, y;
	cin >> Bill >> Base >> Max >> AddBill >> Amount;
	x = Bill * Amount;
	if (Max < Amount)
	{
		Amount -= Max;
		y = Base + AddBill * Amount;
	}
	else
		y = Base;
	int Pay = x < y ? x : y; // ���׿���
	cout << Pay << endl;

}
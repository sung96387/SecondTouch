#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D;
	int sum = 0;
	cin >> A >> B >> C >> D;
	sum = A + B + C + D;
	int Min = sum / 60;
	int Sec= sum % 60;
	cout << Min << endl << Sec << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;
	int Mathday,Handay;
	
	Mathday = A / C;
	A %= C;
	if (A > 0)
		Mathday++;

	Handay = B / D;
	B %= D;
	if (B > 0)
		Handay++;

	cout << (Mathday < Handay ? L - Handay : L - Mathday);
	return 0;
}
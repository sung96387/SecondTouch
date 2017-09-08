#include <iostream>
using namespace std;
int GCD(int a, int b) // 유클리드 호제법 미사용
{
	if (a < b)
		return GCD(b, a);
	if (b == 0)
		return a;
	return GCD(b, a%b);
}
int main()
{
	int iTest = 0;
	int gcd;
	int A, B;
	cin >> iTest;
	
	for (int i = 0; i < iTest; i++)
	{
		cin >> A >> B;
		gcd = GCD(A, B);
		if (GCD(A, B) == 1)
			cout << A*B << endl;
		else
			cout << gcd * (A / gcd) * (B / gcd) << endl;
	}
	
	return 0;
}
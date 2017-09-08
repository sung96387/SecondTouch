#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int T, x1, y1, r1, x2, y2, r2;
	int Rlarge, Rsmall;
	int* ans;
	cin >> T;

	ans = new int[T];
	for (size_t i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double K = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		if (r1 > r2) {
			Rlarge = r1;
			Rsmall = r2;
		}
		else {
			Rlarge = r2;
			Rsmall = r1;
		}
		if (K == 0) {
			if (r1 == r2) {
				ans[i] = -1;
			}
			else {
				ans[i] = 0;
			}
		}
		else if (r1 + r2 > K && Rlarge - Rsmall < K) {
			ans[i] = 2;

		}
		else if (r1 + r2 == K || Rlarge - Rsmall == K) {
			ans[i] = 1;
		}
		else if (r1 + r2 < K || Rlarge - Rsmall > K) {
			ans[i] = 0;
		}
	}
	for (int i = 0; i < T; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}


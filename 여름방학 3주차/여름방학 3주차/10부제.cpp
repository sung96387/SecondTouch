#include <iostream>
using namespace std;

int main() {
	int day;
	cin >> day;

	int cnt = 0;
	for (int i = 0; i<5; i++) {
		int a;
		cin >> a;
		if (a == day) cnt++;
	}
	cout << cnt;
	return 0;
}

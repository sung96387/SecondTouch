#include <iostream>
using namespace std;
int main() {
	int sound[8], asc = 0, desc = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> sound[i];
		if (sound[i] == i + 1)
		{
			asc++;
		}
		else if (sound[i] == 8 - i)
		{
			desc++;
		}
	}
	if (asc == 8)
		cout << "ascending" << '\n';
	else if (desc == 8)
		cout << "descending" << '\n';
	else if (asc != 8 && desc != 8)
		cout << "mixed" << '\n';

	return 0;
}



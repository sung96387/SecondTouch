#include <iostream>
using namespace std;

int main()
{
	int num;
	int count = 0;
	int temp1, temp2, temp3, result;
	cin >> num;
	result = num;
	while (result != num || count == 0)
	{
		temp1 = result/ 10; 
		temp2 = result % 10;
		temp3 = (temp1 + temp2) % 10;
		temp1 = temp2;
		temp2 = temp3;
		result = temp1 * 10 + temp2;
		count++;
	}
	cout << count << endl;

	return 0;
}
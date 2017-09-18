#include <iostream>
using namespace std;
typedef unsigned long int UI;
int main()
{
	UI num;
	int count = 0;
	cin >> num;

	for (size_t i = 1; i <= num; i*=10)
	{
		count += num - i + 1;
	}
	//1~9 9*1
	//10~99 9*10
	//100~999 9*100
	cout << count << endl;
	

	return 0;
}
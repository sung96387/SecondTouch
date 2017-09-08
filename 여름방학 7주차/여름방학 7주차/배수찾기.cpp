#include <iostream>
using namespace std;

int main()
{
	int num;
	int multi;
	cin >> num;
	while (1)
	{
		cin >> multi;
		if (multi == 0)
		{break;}
		
		if (multi % num == 0)
		{
			
			cout << multi << " is a multiple of " << num
				<< "." << endl;
		}
		else
		{
			cout << multi << " is NOT a multiple of " << num
				<< "." << endl;
		}
	}
	return 0;
}
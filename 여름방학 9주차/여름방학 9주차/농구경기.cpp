#include <iostream>
#include <string>
using namespace std;
int aArray[26];
int member, p;
int main() 
{
	
	string k;
	cin >> member;
	while (member--)
	{
		cin >> k;
		aArray[k[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
		if (aArray[i] >= 5)
		{
			printf("%c", i + 'a');
			p = 1;
		}
	if (p == 0)
		cout << "PREDAJA" << '\n';
}


#include <iostream>
#include <string>
using namespace std;
int main() {
	int Test, R;
	string S, arr[100];
	string getname = "";
	cin >> Test;
	for (int num = 0; num < Test; num++)
	{
		cin >> R >> S;
		for (int i = 0; i < S.size(); i++)
		{
			for (int j = 0; j < R; j++)
			{
				getname += S[i];
			}
		}
		arr[num] = getname;
		getname = "";
	}
	for (int i = 0; i < Test; i++)
	{
		cout << arr[i] << "\n";
	}
}



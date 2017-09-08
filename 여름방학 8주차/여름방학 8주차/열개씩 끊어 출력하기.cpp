#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N;
	getline(cin, N);
	for (size_t i = 0; i < N.size(); i++)
	{
		cout << N[i];
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}


}
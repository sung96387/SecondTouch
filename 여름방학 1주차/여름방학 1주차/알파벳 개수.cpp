#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Word;
	int alpha[26] = {0};
	getline(cin, Word);

	

	for (int i = 0; i < Word.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (Word[i] == 'a' + j)
				alpha[j]++;
		}
	}
	for (int k = 0; k < 26; k++)
	{
		cout << alpha[k] << " ";
	}
	return 0;
}
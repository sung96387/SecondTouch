#include <iostream>
#include <string>
using namespace std;
// �ƽ�Ű �ڵ� �̿� �ƽ�Ű �ڵ� : 'A'=65 'Z'=90
// A->X B->Y C->Z
// D->A.........Z->W
int main()
{
	string caesar;
	cin >> caesar;
	for (int i = 0; i < caesar.size(); i++)
	{
		if (caesar[i] > 67 )
		{
			
			printf("%c", caesar[i] - 3); //COUT ���� �Ҷ� ��°��� ���ڷ� ���ͼ� ���� ���� -> PRINTF���
		}
		else
		{ 
			printf("%c", caesar[i] +23);
		}
	}
	return 0;
}
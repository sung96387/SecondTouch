#include <iostream>
#include <string>
using namespace std;
// 아스키 코드 이용 아스키 코드 : 'A'=65 'Z'=90
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
			
			printf("%c", caesar[i] - 3); //COUT 으로 할때 출력값이 숫자로 나와서 수정 포기 -> PRINTF사용
		}
		else
		{ 
			printf("%c", caesar[i] +23);
		}
	}
	return 0;
}
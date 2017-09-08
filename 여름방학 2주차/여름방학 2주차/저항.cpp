#include <iostream>
#include <string.h>
using namespace std;
using std::string;
int main()
{
	const char *color[11] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	long long regis[2][11] = { {0,1,2,3,4,5,6,7,8,9},{1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000} };
	char select[3][11] = {0,}; // 열거형 형식으로 쓰고 이차원으로 써야함 안쓰면
	//밑에서 에러가남
	long long temp, result = 0;
	cin >> select[0] >> select[1] >> select[2];
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(color[i], select[0]) == 0)
		{
			result += (regis[0][i] * 10);
		}
		if (strcmp(color[i], select[1]) == 0)
		{
			result += regis[0][i];  // 여기서 에러가났음.
		}
		if (strcmp(color[i], select[2]) == 0)
		{
			temp = regis[1][i];
		}
	}
	cout << result*temp << endl;
	return 0;
}
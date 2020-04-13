#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
int x, y = 0;
char arr1[10][10];
int a[10][10] = { 0 };
int dir[4][2] = { { -1,0 },{ 1,0 },{ 0,-1 },{ 0,1 } };
void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int m = x + dir[i][0];
		int n = y + dir[i][1];
		if (m >= 0 && m <= 9 && n >= 0 && n <= 9 && arr1[m][n] != '#')
		{
			if (a[m][n] == 0 || (a[x][y] + 1) < a[m][n])
			{
				a[m][n] = a[x][y] + 1;
				dfs(m, n);
			}
		}
	}
}
int main()
{
	char c;
	while (cin >> c)
	{
		arr1[0][0] = c;
		for (int i = 1; i<10; i++)
		{
			cin >> c;
			arr1[0][i] = c;
		}
		for (int i = 1; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cin >> arr1[i][j];
			}
		}
		dfs(0, 1);
		printf("%d\n", a[9][8]);
		memset(a, 0, sizeof(a));
	}
	system("pause");
	return 0;
}
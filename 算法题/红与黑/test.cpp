#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define N 21
int x, y = 0;
char arr1[N][N];
int sum = 1;
void dfs(int x, int y)
{
	
	arr1[x][y] = '#';
	if (arr1[x - 1][y] == '.') //вС
	{
		sum++;
		dfs(x - 1, y);
		
	}
	if (arr1[x][y-1] == '.') //ио
	{
		sum++;
		dfs(x, y-1);
		
	}
	if (arr1[x + 1][y] == '.') //ср
	{
		sum++;
		dfs(x + 1, y);
		
	}
	if (arr1[x][y+1] == '.') //об
	{
		sum++;
		dfs(x, y+1);
		
	}
	return;
}
int main()
{
		int m, n = 0;
		scanf("%d %d", &m, &n);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr1[i][j];
				if (arr1[i][j] == '@')
				{
					x = i;
					y = j;
				}
			}
		}
		dfs(x, y);
		printf("%d", sum);

	
	system("pause");
	return 0;
}
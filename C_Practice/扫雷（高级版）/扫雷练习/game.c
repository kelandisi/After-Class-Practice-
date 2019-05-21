#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------------------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);			
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{		
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------------\n");
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}	
	}
}
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	int ret = 0;
	ret = GetMine(mine, x, y);
	if (ret == 0) {
		show[x][y] = ' ';
		if (x - 1>0 && y>0 && show[x - 1][y] == '*')
			OpenMine(mine, show, row, col, x - 1, y);
		if (x - 1>0 && y + 1 <= col && show[x - 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y + 1); 		
		if (x>0 && y + 1 <= col && show[x][y + 1] == '*')
			OpenMine(mine, show, row, col, x, y + 1);
		if (x + 1 <= row && y + 1 <= col && show[x + 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y + 1);
		if (x + 1 <= row && y>0 && show[x + 1][y] == '*')
			OpenMine(mine, show, row, col, x + 1, y);
		if (x + 1 <= row && y - 1>0 && show[x + 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y - 1);
		if (x>0 && y - 1>0 && show[x][y - 1] == '*')
			OpenMine(mine, show, row, col, x, y - 1);
		if (x - 1>0 && y - 1>0 && show[x - 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y - 1);
	}
		else 
		{ 
			show[x][y] = GetMine(mine, x, y) + '0';
		} 
}

int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +

		mine[x - 1][y - 1] +

		mine[x][y - 1] +

		mine[x + 1][y - 1] +

		mine[x + 1][y] +

		mine[x + 1][y + 1] +

		mine[x][y + 1] +

		mine[x - 1][y + 1] - 8 * '0';
}
void SafeMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{
	int ret = 1;
	int x = 0;
	int y = 0;
	int count = 0;
	printf("请输入你要排查的坐标：");
	scanf("%d%d", &x,&y);
	if (mine[x][y] == '1')
	{
		mine[x][y] = '0';
		count = GetMine(mine, x, y);
		show[x][y] = count + '0';
	
	while (ret)
	{
		if (mine[x][y] == '1')
		{
			int m = rand() % 9;
			int n = rand() % 9;
			mine[x][y] = '0';
			mine[m][n] = '1';
		}
		ret--;
	}
	}
	OpenMine(mine, show, row, col,x,y);
	DisplayBoard(show, row, col);
}
static int MyWin(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i < row; i++)
	{
		for (j = 1; j < 0; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int count = 0;
	while (1)
	{
		printf("请输入要排查的坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 0 && x <= row && y >= 0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{			
				count = GetMine(mine, x, y);
				show[x][y] = count+'0';
				OpenMine(mine, show, row, col, x, y);
				DisplayBoard(show, row, col);
				if (MyWin(show,row,col) == EASY_COUNT)
				{
					break;
				}
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (MyWin(show, row, col) == EASY_COUNT)
	{
		printf("恭喜你排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}
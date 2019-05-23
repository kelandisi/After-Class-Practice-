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
	return count;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int count = 0;
	while (1)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d%d", &x, &y);
		if (x >= 0 && x <= row && y >= 0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{			
				count = GetMine(mine, x, y);
				show[x][y] = count+'0';
				DisplayBoard(show, row, col);
				if (MyWin(show,row,col) == EASY_COUNT)
				{
					break;
				}
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (MyWin(show, row, col) == EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}
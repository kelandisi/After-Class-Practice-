#define _CRT_SECURE_NO_WARNINGS 1
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
	printf("--------------------------\n");
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
	printf("--------------------------\n");
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = 0;
		int y = 0;
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void open_board(char show[ROWS][COLS], char mine[ROWS][COLS], int i, int j)
{
	{
		if (mine[i][j] == '0'&&i >= 0 && j >= 0 && show[i][j] == '*')
		{
			show[i][j] = get_mine(mine, i, j) + '0';
		}
		if (mine[i][j - 1] == '0'&&i >= 0 && j - 1 >= 0 && show[i][j - 1] == '*')
		{
			show[i][j - 1] = get_mine(mine, i, j - 1) + '0';
			if (get_mine(mine, i, j - 1) == 0)
			{
				open_board(mine, show, i, j - 1);
			}
		}
		if (mine[i][j + 1] == '0'&&i >= 0 && j + 1 >= 0 && show[i][j + 1] == '*')
		{
			show[i][j + 1] = get_mine(mine, i, j + 1) + '0';
			if (get_mine(mine, i, j + 1) == 0)
			{
				open_board(mine, show, i, j + 1);
			}
		}
		if (mine[i - 1][j] == '0'&&i - 1 >= 0 && j >= 0 && show[i - 1][j] == '*')
		{
			show[i - 1][j] = get_mine(mine, i - 1, j) + '0';
			if (get_mine(mine, i - 1, j) == 0)
			{
				open_board(mine, show, i - 1, j);
			}
		}
		if (mine[i - 1][j - 1] == '0'&&i - 1 >= 0 && j - 1 >= 0 && show[i - 1][j - 1] == '*')
		{
			show[i - 1][j - 1] = get_mine(mine, i - 1, j - 1) + '0';
			if (get_mine(mine, i - 1, j - 1) == 0)
			{
				open_board(mine, show, i - 1, j - 1);
			}
		}
		if (mine[i - 1][j + 1] == '0'&&i - 1 >= 0 && j + 1 >= 0 && show[i - 1][j + 1] == '*')
		{
			show[i - 1][j + 1] = get_mine(mine, i - 1, j + 1) + '0';
			if (get_mine(mine, i - 1, j + 1) == 0)
			{
				open_board(mine, show, i - 1, j + 1);
			}
		}
		if (mine[i + 1][j + 1] == '0'&&i + 1 >= 0 && j + 1 >= 0 && show[i + 1][j + 1] == '*')
		{
			show[i + 1][j + 1] = get_mine(mine, i + 1, j + 1) + '0';
			if (get_mine(mine, i + 1, j + 1) == 0)
			{
				open_board(mine, show, i + 1, j + 1);
			}
		}

		if (mine[i + 1][j] == '0'&&i + 1 >= 0 && j >= 0 && show[i + 1][j] == '*')
		{
			show[i + 1][j] = get_mine(mine, i + 1, j) + '0';
			if (get_mine(mine, i + 1, j) == 0)
			{
				open_board(mine, show, i + 1, j);
			}
		}
		if (mine[i + 1][j - 1] == '0'&&i + 1 >= 0 && j - 1 >= 0 && show[i + 1][j - 1] == '*')
		{
			show[i + 1][j - 1] = get_mine(mine, i + 1, j - 1) + '0';
			if (get_mine(mine, i + 1, j - 1) == 0)
			{
				open_board(mine, show, i + 1, j - 1);
			}
		}
	}
}




void SafeMine(char mine[ROWS][COLS], int i, int j,int row,int col)
{
	int count = 1;
	while (count)
	{
		if (mine[i][j] = '1');
		{
			int m = rand() % row;
			int n = rand() % col;
			mine[i][j] = '0';
			mine[m][n] = '1';	
		}
		count--;
	}
}
void FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int input = 0;
	int i = 0;
	int j = 0;
	while (input)
	{
		do
		{
			printf("--1.扫雷     0.标记--");
			printf("请进行你要进行的操作：");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("请输入你要排查的坐标：");
				scanf("%d%d", &i, &j);
				if (count == EASY_COUNT)
				{
					SafeMine(mine, i, j,row,col);
				}
				if (mine[i][j] = '1')
				{
					printf("很遗憾，你被炸死了！\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					open_board(show, mine,i,j);
					DisplayBoard(show, row, col);
					count--;
				}
				break;
			case 0:
				printf("请输入你要标记雷的坐标：");
				scanf("%d%d", &i, &j);
				if (show[i][j] = '*')
				{
					show[i][j] = '!';
				}
				else
				{
					show[i][j] = '*';
				}
				DisplayBoard(show, row, col);
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;
			}

		} while (input);
	}
	printf("扫雷成功！");
}
int get_mine(char mine[ROWS][COLS], int i, int j)
{
	return mine[i][j - 1] 
		+ mine[i - 1][j - 1]
		+ mine[i - 1][j] 
		+ mine[i + 1][j - 1]
		+ mine[i][j + 1]
		+ mine[i + 1][j + 1]
		+ mine[i + 1][j] 
		+ mine[i - 1][j + 1]-8*'0';
}


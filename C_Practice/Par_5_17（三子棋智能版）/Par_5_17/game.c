#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走：");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y>0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此位置已经有棋，请重新选择！\n");
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入!\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:\n");
	//判断第一行
	if (board[0][0] == ' ' && board[0][1] == '*' && board[0][2] == '*')
	{
		board[0][0] = '#';
	}
	else if (board[0][0] == '*' && board[0][1] == ' ' && board[0][2] == '*')
	{
		board[0][1] = '#';
	}
	else if (board[0][0] == '*' && board[0][1] == '*' && board[0][2] == ' ')
	{
		board[0][2] = '#';
	}
	//判断第二行
	else if (board[1][0] == ' ' && board[1][1] == '*' && board[1][2] == '*')
	{
		board[0][0] = '#';
	}
	else if (board[1][0] == '*' && board[1][1] == ' ' && board[1][2] == '*')
	{
		board[0][1] = '#';
	}
	else if (board[1][0] == '*' && board[1][1] == '*' && board[1][2] == ' ')
	{
		board[1][2] = '#';
	}
	//判断第三行
	else if (board[2][0] == ' ' && board[2][1] == '*' && board[2][2] == '*')
	{
		board[2][0] = '#';
	}
	else if (board[2][0] == '*' && board[2][1] == ' ' && board[2][2] == '*')
	{
		board[2][1] = '#';
	}
	else if (board[2][0] == '*' && board[2][1] == '*' && board[2][2] == ' ')
	{
		board[2][2] = '#';
	}
	//判断第一列
	else if (board[0][0] == ' ' && board[1][0] == '*' && board[2][0] == '*')
	{
		board[0][0] = '#';
	}
	else if (board[0][0] == '*' && board[1][0] == ' ' && board[2][0] == '*')
	{
		board[1][0] = '#';
	}
	else if (board[0][0] == '*' && board[1][0] == '*' && board[2][0] == ' ')
	{
		board[2][0] = '#';
	}
	//判断第二列
	else if (board[0][1] == ' ' && board[1][1] == '*' && board[2][1] == '*')
	{
		board[0][1] = '#';
	}
	else if (board[0][1] == '*' && board[1][1] == ' ' && board[2][1] == '*')
	{
		board[1][1] = '#';
	}
	else if (board[0][1] == '*' && board[1][1] == '*' && board[2][1] == ' ')
	{
		board[2][1] = '#';
	}
	//判断第三列
	else if (board[0][1] == ' ' && board[1][2] == '*' && board[2][2] == '*')
	{
		board[0][1] = '#';
	}
	else if (board[0][1] == '*' && board[1][2] == ' ' && board[2][2] == '*')
	{
		board[1][2] = '#';
	}
	else if (board[0][1] == '*' && board[1][2] == '*' && board[2][2] == ' ')
	{
		board[2][2] = '#';
	}
	//判断左对角线
	else if (board[0][0] == ' ' && board[1][1] == '*' && board[2][2] == '*')
	{
		board[0][0] = '#';
	}
	else if (board[0][0] == '*' && board[1][1] == ' ' && board[2][2] == '*')
	{
		board[1][1] = '#';
	}
	else if (board[0][0] == '*' && board[1][1] == '*' && board[2][2] == ' ')
	{
		board[2][2] = '#';
	}
	//判断右对角线
	else if (board[0][2] == ' ' && board[1][1] == '*' && board[2][0] == '*')
	{
		board[0][2] = '#';
	}
	else if (board[0][2] == '*' && board[1][1] == ' ' && board[2][0] == '*')
	{
		board[1][1] = '#';
	}
	else if (board[0][2] == '*' && board[1][1] == '*' && board[2][0] == ' ')
	{
		board[2][0] = '#';
	}
	else
	{
		while (1)
		{
			int x = 0;
			int y = 0;
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}
char CheakWin(char board[ROW][COL], int row, int col)
{
	//行赢
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//列赢
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}
	//对角线赢
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (IsFull(board, row, col) == 1)
		return 'Q';

	return 'C';
}




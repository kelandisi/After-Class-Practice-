#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };
	int ret = 0;
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheakWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheakWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	if (ret == 'Q')
	{
		printf("平局！\n");
	}
}
void menu()
{
	printf("------------------------\n");
	printf("---      1.play      ---\n");
	printf("---      0.exit      ---\n");
	printf("------------------------\n");
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{	
		menu();
		printf("请选择您要进行的操作<:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("输入错误，请重新输入！");
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}
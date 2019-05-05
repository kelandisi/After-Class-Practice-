#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheakWin(board, ROW, COL);
		if (ret != 'C')
			break;
		
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheakWin(board, ROW, COL);
		if (ret != 'C')
			break;	
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}		
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}		
	else if (ret == 'Q')
	{
		printf("平局！\n");
	}
}
void menu()
{
	printf("-----------------------\n");
	printf("        0.exit         \n");
	printf("        1.play         \n");
	printf("-----------------------\n");
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择您要进行的操作>:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏结束！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入！\n");
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
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
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
	if (ret == 'O')
	{
		printf("���Ӯ��\n");
	}
	if (ret == 'X')
	{
		printf("����Ӯ!\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ�֣�\n");
	}
}
void menu()
{
	printf("*******************\n");
	printf("***    1.play   ***\n");
	printf("***    0.exit   ***\n");
	printf("*******************\n");
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("����������ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룡\n");
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
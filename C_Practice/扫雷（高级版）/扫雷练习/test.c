#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	SafeMine(mine, show, ROW, COL);
	FindMine(mine, show, ROW, COL);

}
void menu()
{
	printf("----------------------------------\n");
	printf("---          1. play           ---\n");
	printf("---          0. exit           ---\n");
	printf("----------------------------------\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��������Ҫִ�еĲ���:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
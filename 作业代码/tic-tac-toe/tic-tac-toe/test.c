#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);
		ret = cheakWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
		
		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);
		ret = cheakWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
	
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ��\n");
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
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
			case 0:
				printf("�˳���\n");
				break;
			case 1:
				game();
				break;
			default:
				printf("�����������������\n");
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
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//'0'
	char show[ROWS][COLS] = { 0 };//'*'
	InitBoard(mine, ROWS, COLS, '0');//��ʼ�������飨��ʼ������Ϊ'0')
	InitBoard(show, ROWS, COLS, '*');//��ʼ��չʾ���飨��ʼ������Ϊ��*����
	SetMine(mine, ROW, COL);//���������ﲼ����
	//DisplayBoard(mine, ROW, COL);�������ԣ�������߿��׵Ĳ����Ƿ��д�
	DisplayBoard(show, ROW, COL);//��ӡ�û����棬��ʼ����Ϸ��
	SafeMine(mine, ROW, COL);//��ȫ�������Է��û���һ�����׾ͱ�ը��������....
	FindMine(show, mine, ROW, COL);//�û�����

}
void menu()
{
	printf("***********************\n");
	printf("***     1. play     ***\n");
	printf("***     0. exit     ***\n");
	printf("***********************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��������Ҫ���еĲ���:");
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
			printf("ѡ�����������ѡ��\n");
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

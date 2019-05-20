#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//'0'
	char show[ROWS][COLS] = { 0 };//'*'
	InitBoard(mine, ROWS, COLS, '0');//初始化雷数组（初始化内容为'0')
	InitBoard(show, ROWS, COLS, '*');//初始化展示数组（初始化内容为‘*’）
	SetMine(mine, ROW, COL);//在雷数组里布置雷
	//DisplayBoard(mine, ROW, COL);用来测试，给设计者看雷的布置是否有错
	DisplayBoard(show, ROW, COL);//打印用户界面，开始玩游戏啦
	SafeMine(mine, ROW, COL);//安全函数，以防用户第一次排雷就被炸死的尴尬....
	FindMine(show, mine, ROW, COL);//用户排雷

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
		printf("请输入你要进行的操作:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误，请重新选择！\n");
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

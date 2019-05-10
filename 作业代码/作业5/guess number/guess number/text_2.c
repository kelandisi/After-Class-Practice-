#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;
	int x = 0;
	while (1)
	{
		printf("请输入你要猜的数字<:");
		scanf("%d", &x);
		if (x>ret)
		{
			printf("猜大了！\n");
		}
		if (x<ret)
		{
			printf("猜小了！\n");
		}
		if (ret == x)
		{
			prinft("恭喜你猜对了！\n");
			break;
		}
	}
}
void menu()
{
	printf("******************\n");
	printf("***   1.play   ***\n");
	printf("***   0.exit   ***\n");
	printf("******************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			game();
			break;
			default：
				printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	return 0;
}
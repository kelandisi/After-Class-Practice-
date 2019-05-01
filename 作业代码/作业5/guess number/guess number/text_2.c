#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******************************\n");
	printf("***   1.play      0.exit  **\n");
	printf("******************************\n");
}
void game()
{	
	int ret = rand()%100+1;
	while (1)
	{
		int a = 0;
		printf("猜一个数:<");
		scanf("%d", &a);
		if (a < ret)
		{
			printf("猜小了\n");
		}
		else if (a>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
					break;
			case 0:
				printf("退出\n");
					break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	
	} while (input);
	system("pause");
	return 0;

}
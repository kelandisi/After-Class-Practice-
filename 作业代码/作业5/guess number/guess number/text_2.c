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
		printf("��������Ҫ�µ�����<:");
		scanf("%d", &x);
		if (x>ret)
		{
			printf("�´��ˣ�\n");
		}
		if (x<ret)
		{
			printf("��С�ˣ�\n");
		}
		if (ret == x)
		{
			prinft("��ϲ��¶��ˣ�\n");
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
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			game();
			break;
			default��
				printf("����������������룡\n");
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
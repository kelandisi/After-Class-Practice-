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
		printf("��һ����:<");
		scanf("%d", &a);
		if (a < ret)
		{
			printf("��С��\n");
		}
		else if (a>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
					break;
			case 0:
				printf("�˳�\n");
					break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	
	} while (input);
	system("pause");
	return 0;

}
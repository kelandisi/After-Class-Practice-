#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//����һ��ż��������������������ֱ���Գ���������������������һ�룡
	/*int i = 0;   
	int k = 0;
	int count = 0;
	for (i = 101; i <= 199; i += 2)
	{
		for (k = 2; k < i; k++)
		{
			if (i%k == 0)	
				break;
		}
		if (i == k)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n100��200֮�乲������  %d", count);*/

	//�������һ�����Ŀ�ƽ����Ȼ<=����һ�������ӣ������Գ�������i����
	int i = 0;
	int k = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (k = 2; k <= sqrt(i); k++)
		{
			if (i%k == 0)
				break;
		}
		if (k > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n%d", count);
	system("pause");
	return 0;
}
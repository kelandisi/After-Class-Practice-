#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//����һ
//int count_one_bits(unsigned int n)//���ڸ����ڼ�����ﴢ���ǲ������ʽ������Ҫ���޷�������������
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//15
//		{			   //000000000000000000001111
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//������
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//		{
//			n = n&(n-1);
//			count++;
//		}
//		return count;
//}

//������
int count_one_bits(unsigned int n)
{

	int count = 0;
	int i = 0;
	for(i=32; i>0; i--)		//������   for(i=0; i<32 ;i++)  ���ҵ���
	{
		if(((n>>i)&1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
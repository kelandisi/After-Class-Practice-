#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��strlen�������������ַ�������
//int main()
//{
//	int ret = strlen("abc");
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}



//�Լ����庯�����ַ������ȣ�������ʱ�����ķ������ǵݹ飩
//int my_strlen(char *str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcda");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}


//�ݹ����ַ�������
int my_strlen(char *str)
{
	if (*str != '\0')
		return 1+ my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	int len = my_strlen("aeqweq");
	printf("%d\n", len);
	system("pause");
	return 0;
}
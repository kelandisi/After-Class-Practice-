#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ����λ�绰�������λ��ԭ���绰����Ϊ1��3��5��7��9��ͷ�ĺ���ǰ��2��
//ԭ���绰����Ϊ2��4��6��8��ͷ�ļ�3��
//���磺����1234���������21234��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 0;
//	int x = 0;
//	printf("��������ĵ绰����:");
//	scanf("%d", &num);
//	x = num / 1000;
//	switch (x)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 9:
//		num = 2 * 10000 + num;
//		break;
//	case 2:
//	case 4:
//	case 6:
//	case 8:
//		num = 3 * 10000 + num;
//		break;
//	default:
//		printf("�����������������!");
//		break;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}



/*���ʵ����λ�绰�������λ��ԭ���绰����Ϊ1��2��3��4��5��ͷ�ĺ���ǰ��3
ԭ���绰����Ϊ6��7��8��9��ͷ�ļ�2
���磺����1234���������31234*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int x = 0;
	printf("��������ĵ绰����:");
	scanf("%d", &num);
	x = num / 1000;
	switch (x)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		num = 3 * 10000 + num;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		num = 2 * 10000 + num;
		break;
	default:
		printf("�����������������!");
		break;
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}
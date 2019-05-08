#define _CRT_SECURE_NO_WARNINGS 1
//编程实现四位电话号码的升位。原来电话号码为1、3、5、7、9打头的号码前加2，
//原来电话号码为2、4、6、8打头的加3，
//例如：输入1234，则输出：21234。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 0;
//	int x = 0;
//	printf("请输入你的电话号码:");
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
//		printf("输入错误，请重新输入!");
//		break;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}



/*编程实现四位电话号码的升位。原来电话号码为1、2、3、4、5打头的号码前加3
原来电话号码为6、7、8、9打头的加2
例如：输入1234，则输出：31234*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int x = 0;
	printf("请输入你的电话号码:");
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
		printf("输入错误，请重新输入!");
		break;
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}
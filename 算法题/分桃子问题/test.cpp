#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n == 0)
//		break;
//		else
//		{
//			 cout << pow(5, n) - 4 << pow(4, n) + n - 4 << endl;
//		 }
//	 }
// return 0;
//}
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n), n) //输入一个数，假设n!=0就循环； 
	{
		int i;
		long long zong = 1;
		for (i = 1; i <= n; i++)    //桃子数为zong-4;
			zong *= 5;
		long long hou = zong;
		for (i = 1; i <= n; i++)    //老猴子得到的桃子数为hou+n-4;
			hou = hou / 5 * 4;
		printf("%lld %lld\n", zong - 4, hou + n - 4);
	}
	return 0;
}
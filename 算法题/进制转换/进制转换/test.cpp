#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	long a;	//输入的10进制的数
	int p;  //要转换至p进制
	int x;	//余数
	int y = 0;//用于数组++
	int count[100];
		cin >> a >> p;
		while (a != 0)//把余数放入数组中
		{
			x = a%p;
			a = a / p;
			y++;		//计算取余的次数（进的位数）
			count[y] = x;
		}

		for (int i = y; i >= 1; i--)
		{
			if (count[i] >= 10)
			{
				cout << (char)(count[i] + 55); //把数字字符变成大写字母
			
			}
			else
			{
				cout << count[i];
				
			}
		}
		cout << endl;
	
	
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

int main()
{
	int x = 0;
	while (cin >> x)
	{
		if (x <= 2) //前两行直接返回0
		{
			cout<< -1<<endl;
		}
		else if (x % 2 == 1)  //奇数行第一个出现偶数为2
		{
			cout << 2 << endl;
		}
		else if (x % 4 == 0)  // 4  8  12...在第三位
		{
			cout << 3 << endl;
		}
		else
			cout << 4 << endl;
	}
	system("pause");
	return 0;
}
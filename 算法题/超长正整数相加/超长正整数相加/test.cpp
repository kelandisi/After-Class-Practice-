#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

#define N 10000

int main()
{
	string s1;
	string s2;
	while (getline(cin, s1) &&
		getline(cin, s2))
	{
		int len1 = s1.size();
		int len2 = s2.size();
		int a[N] = { 0 }, b[N] = { 0 };
		int i = 0;
		for (i = 0; i < len1; i++)
		{
			a[i] = s1[len1 - i - 1] - '0';
		}
		for (i = 0; i < len2; i++)
		{
			b[i] = s2[len2 - i - 1] - '0';
		}
		int len = len1 > len2 ? len1 : len2;       //找到位数多的


		for (i = 0; i < len; i++)		//进位
		{
			a[i] = a[i] + b[i];
			if (a[i] >= 10)
			{
				a[i] = a[i] % 10;
				a[i + 1]++;
			}
		}

		if (a[len])
		{
			cout << a[len];
		}
		for (i = len - 1; i >= 0; i--)
		{
			cout << a[i];
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
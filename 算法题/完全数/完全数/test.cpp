#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int sum = 0;
	int count = 0;
	while (cin >> n)
	{
		for (int i = 2; i < n; i++)
		{
			for (int j = 1; j <= i - 1; j++)
			{
				if (i%j == 0)
					sum += j;
			}
			if (sum == i)
				count++;
			sum = 0;
		}
		cout << count<<endl;
		count = 0;
	}
	system("pause");
	return 0;
}
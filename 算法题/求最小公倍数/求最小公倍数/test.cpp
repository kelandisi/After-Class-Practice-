#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int m = 0;
	while (cin >> n >> m)
	{
		if (n > m)
		{
			int temp = m;
			m = n;
			n = temp;
		}
		for (int i = m; i > 0; i++)
		{
			if (i%m == 0 && i%n == 0)
			{
				cout << i<<endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}
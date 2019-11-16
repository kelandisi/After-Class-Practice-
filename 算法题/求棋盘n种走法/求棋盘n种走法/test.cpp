#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int getcount(int n, int m)
{
	if (n > 1 && m > 1)
	{
		return getcount(n - 1, m) + getcount(n, m - 1);
	}
	else if ((n >= 1) && (m == 1) || (n == 1) && (m >= 1))
	{
		return n + m;
	}
	else
		return 0;
}
int main()
{
	int n = 0;
	int m = 0;
	while (cin >> n >> m)
	{
		cout << getcount(n, m) << endl;
	}
	
	system("pause");
	return 0;
}
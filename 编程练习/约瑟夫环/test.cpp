#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int pos = 0;
	for (int i = 2; i <= n; i++)
	{
		pos = (pos + m) % (i);
	}
	cout<< pos;
	system("pause");
	return 0;
}
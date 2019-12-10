#define _CRT_SECURE_NO_WARNINGS 1
// write your code here cpp
#include<iostream>
using namespace std;
int times(int n)
{
	if (n == 0)
		exit(0);
	if (n == 1)
		return 1;
	if (n <= 3)
		return 1;
	else
		return times((n+2)/3) + 1;
}
int main()
{
	int n = 0;
	while (cin >> n)
	{
		cout<<times(n)<<endl;
	}
	system("pause");
	return 0;
}

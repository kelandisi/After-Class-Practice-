#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
float Error(int n) 
{
	if (n == 1) 
		return 0;
	else if (n == 2) 
	{
		return 1;
	}
	else 
	{
		return (n - 1)*(Error(n - 1) + Error(n - 2));
	}
}
float getsum(int n)
{
	if (n == 0)
		return 1;
	else
		return n*getsum(n - 1);
}
int main()
{
	int n = 0;
	while (cin>>n)
	{
		float result = (Error(n) / getsum(n)) * 100;
		printf("%.2f%%\n", result);
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int Fibo(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	int one = 1;
	int two = 1;
	int sum = 0;
	for (int i = 3; i <= n; i++)
	{
		sum = one + two;
		one = two;
		two = sum;
	}
	return sum;
}

//青蛙跳台阶问题
int main()
{
	int n = 0;
	cin >> n;
	cout<<Fibo(n);
	system("pause");
	return 0;
}
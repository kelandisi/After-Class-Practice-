#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

long long int a, b, c, d;
long long gcd(long long t1, long long t2)//辗转相除法求解最小公倍数
{
	return t2 == 0 ? t1 : gcd(t2, t1%t2);
}
void fun(long long m, long long n)//处理分数的形式
{
	int flag1 = 0;//判断符，判断分数是正数还是负数
	int flag2 = 0;

	if (m * n == 0)//判断分母和分子为0的情况
	{
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	if (m < 0)//处理分子小于0
	{
		m = 0 - m;
		flag1 = 1;
	}
	if (n < 0)//处理分母小于0
	{
		n = 0 - n;
		flag2 = 1;
	}
	int flag = 0;//判断整个分数的符号
	if (flag1 == 1 && flag2 == 1)
		flag = 0;
	else if (flag1 == 1 || flag2 == 1)
		flag = 1;
	if (m == n)//处理分子和分母相同的情况
	{
		if (flag == 0)
			cout << "1";
		else
			cout << "-1";
		return;
	}
	long long int x = m % n; //因为m不可能 = 0了，之前已经判断过了，所以此处
							//如果x为0，那么肯定就是没有余数。
	long long int y = m / n;
	if (x == 0)
	{
		if (flag == 0)
			cout << y;		//输出整数部分
		else
			cout << "(-" << y << ")";
		return;
	}
	else
	{
		long long int t1 = m - y * n;//剔除分出的整数部分，分子从最简形式开始
		long long int t2 = n;
		long long int t = gcd(t1, t2);
		t1 = t1 / t;
		t2 = t2 / t;
		if (flag == 1)
		{
			cout << "(-";
			if (y != 0)
				cout << y << " " << t1 << "/" << t2;
			else
				cout << t1 << "/" << t2;
			cout << ")";
		}
		else
		{
			if (y != 0)
				cout << y << " " << t1 << "/" << t2;
			else
				cout << t1 << "/" << t2;
		}
	}
}

void add()
{
	long long int m, n;
	m = a * d + b * c;
	n = b * d; 
	fun(a, b);
	cout << " + ";
	fun(c, d);
	cout << " = ";
	fun(m, n);
	cout << endl;
}
void min()
{
	long long int m, n;
	m = a * d - b * c;
	n = b * d;
	fun(a, b);
	cout << " - ";
	fun(c, d);
	cout << " = ";
	fun(m, n);
	cout << endl;
}
void mul()
{
	long long int m, n;
	m = a * c;
	n = b * d;
	fun(a, b);
	cout << " * ";
	fun(c, d);
	cout << " = ";
	fun(m, n);
	cout << endl;
}
void div()
{
	long long int m, n;
	m = a * d;
	n = b * c;
	fun(a, b);
	cout << " / ";
	fun(c, d);
	cout << " = ";
	fun(m, n);
	cout << endl;
}
int main()
{
	
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	add();
	min();
	mul();
	div();
	system("pause");
	return 0;
}
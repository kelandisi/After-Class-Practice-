#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

long long int a, b, c, d;
long long gcd(long long t1, long long t2)//շת����������С������
{
	return t2 == 0 ? t1 : gcd(t2, t1%t2);
}
void fun(long long m, long long n)//�����������ʽ
{
	int flag1 = 0;//�жϷ����жϷ������������Ǹ���
	int flag2 = 0;

	if (m * n == 0)//�жϷ�ĸ�ͷ���Ϊ0�����
	{
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	if (m < 0)//�������С��0
	{
		m = 0 - m;
		flag1 = 1;
	}
	if (n < 0)//�����ĸС��0
	{
		n = 0 - n;
		flag2 = 1;
	}
	int flag = 0;//�ж����������ķ���
	if (flag1 == 1 && flag2 == 1)
		flag = 0;
	else if (flag1 == 1 || flag2 == 1)
		flag = 1;
	if (m == n)//������Ӻͷ�ĸ��ͬ�����
	{
		if (flag == 0)
			cout << "1";
		else
			cout << "-1";
		return;
	}
	long long int x = m % n; //��Ϊm������ = 0�ˣ�֮ǰ�Ѿ��жϹ��ˣ����Դ˴�
							//���xΪ0����ô�϶�����û��������
	long long int y = m / n;
	if (x == 0)
	{
		if (flag == 0)
			cout << y;		//�����������
		else
			cout << "(-" << y << ")";
		return;
	}
	else
	{
		long long int t1 = m - y * n;//�޳��ֳ����������֣����Ӵ������ʽ��ʼ
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
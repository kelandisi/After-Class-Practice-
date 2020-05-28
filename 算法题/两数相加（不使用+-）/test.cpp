#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int getSum(int a, int b)
{
	return b == 0 ? a : getSum(a^b, (a&b) << 1);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<getSum(a, b);
	system("pause");
	return 0;
}
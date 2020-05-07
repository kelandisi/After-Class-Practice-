#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

bool fun(int n)
{
	if (n == 0)
		return false;
	while (n)
	{

		if (n == 1)
			return true;
		if (n<0)
			return false;
		if (n % 2 == 0)
			n = n / 2;
		else
			return false;
	}
	return true;
}
int main()
{
	int n = 0;
	cin >> n;
	if (fun(n))
		cout << "true\n";
	else
		cout << "false\n";
	system("pause");
	return 0;
}
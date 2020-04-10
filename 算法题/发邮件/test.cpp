#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
long long fun(long long n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return (n - 1)*(fun(n - 1) + fun(n - 2));
}
int main()
{
	long long n = 0;
	while (cin >> n)
	{
		cout << fun(n) << endl;
	}	
	system("pause");
	return 0;

}
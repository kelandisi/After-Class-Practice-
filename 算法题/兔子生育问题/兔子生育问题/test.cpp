#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int getrsum(int m)
{
	if (m == 1 || m == 2)
		return 1 ;
	return getrsum(m - 1) + getrsum(m - 2);
}
int main()
{
//	int m = 0;
//	
//	while (cin >> m)
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		while (m > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			m--;
//		}
//		cout << c<<endl;
//		;
//	}
	int m = 0;

	while (cin >> m)
	{
		cout << getrsum(m) << endl;
	}
	system("pause");
	return 0;
}
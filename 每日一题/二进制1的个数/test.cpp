#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	
	while (cin >> a)
	{
		int count = 0;
		while (a != 0)
		{
			a = a&(a - 1);
			count++;
		}
		cout << count << endl;
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
#include<math.h>
using namespace std;
bool zhishu(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}
void zuixiao(int n)
{
	while (cin >> n)
	{
		assert(n > 2);
		int left = n / 2 - 1;
		int right = n / 2 + 1;

		while (!zhishu(left) || !zhishu(right))
		{
			left++;
			right--;
		}

		cout << right << endl;
		cout << left << endl;
	}
}

int main()
{
	int n = 0;
	
	zuixiao(n);
	system("pause");
	return 0;
}
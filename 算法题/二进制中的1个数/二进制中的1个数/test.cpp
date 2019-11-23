#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<bitset>
using namespace std;
int main()
{

	bitset<32> num;
	int n = 0;
	while (cin >> n)
	{

		num = n;
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			if (num[i] == 1)
				count++;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}
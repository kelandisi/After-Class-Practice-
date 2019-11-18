#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
	int n = 0;
	
	bitset<16> b;
	while (cin >> n)
	{
		b = n;
		int max = 0;
		int count = 0;
		for (int i = 0; i < 16; i++)
		{
			if (b[i] == 0)
				count = 0;
			else
			{
				count++;
				if (max < count)
					max = count;
			}
		}
		cout << max<<endl;
	}
	system("pause");
	return 0;
}
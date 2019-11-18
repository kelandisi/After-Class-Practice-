#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100000;
int Fbi[N];

int main()
{
	Fbi[0] = 1;
	Fbi[1] = 1;
	for (int i = 2; i<N; i++)
	{
		Fbi[i] = Fbi[i - 1] + Fbi[i - 2];
	}
	int n;
	while (scanf("%d", &n)>0)
	{
		int i = 0;
		for (; i<N - 1; i++)
		{
			if (Fbi[i] <= n&&Fbi[i + 1] >= n)
				break;
		}
		int minstep = min(n - Fbi[i], Fbi[i + 1] - n);
		cout << minstep << endl;
	}
	return 0;
	system("pause");
}
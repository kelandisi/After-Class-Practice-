#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	int left[] = { 0 };
	int right[] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> left[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> right[i];
	}

	int ans = 0;
	int ls = 0, rs = 0;
	int lmin = 27, rmin = 27;  //边界值是26
	for (int i = 0; i<n; i++)
	{
		if (left[i] * right[i] == 0)
		{
			ans += left[i] + right[i];    //这里因为有一边为0，所以直接加起来就好了
		}
		else
		{
			ls += left[i];              //计算左边除了为零的那几组的总和
			rs += right[i]; 			  //右边总和
			lmin = min(lmin, left[i]);    //左边的最小值
			rmin = min(rmin, right[i]);	 //右边的最小值
		}
	}
	cout<< ans + min(ls - lmin + 1, rs - rmin + 1) + 1;
	system("pause");
	return 0;
}
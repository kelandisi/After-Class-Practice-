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
	int lmin = 27, rmin = 27;  //�߽�ֵ��26
	for (int i = 0; i<n; i++)
	{
		if (left[i] * right[i] == 0)
		{
			ans += left[i] + right[i];    //������Ϊ��һ��Ϊ0������ֱ�Ӽ������ͺ���
		}
		else
		{
			ls += left[i];              //������߳���Ϊ����Ǽ�����ܺ�
			rs += right[i]; 			  //�ұ��ܺ�
			lmin = min(lmin, left[i]);    //��ߵ���Сֵ
			rmin = min(rmin, right[i]);	 //�ұߵ���Сֵ
		}
	}
	cout<< ans + min(ls - lmin + 1, rs - rmin + 1) + 1;
	system("pause");
	return 0;
}
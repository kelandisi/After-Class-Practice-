#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int main()		//ʱ�临�Ӷ�Ϊ0��n^2��
{
	int n = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
		int SUM = -100000;   //����һ���㹻С�����ֵ
		for (int i = 0; i < arr.size(); i++)
		{
			int subOfArr = 0;  //��ʱ���ֵ
			for (int j = i; j < arr.size(); j++)
			{
				subOfArr += arr[j];

				if (subOfArr > SUM)
				{
					SUM = subOfArr;
				}
			}
		}
		cout<< SUM;	
	system("pause");
	return 0;
}
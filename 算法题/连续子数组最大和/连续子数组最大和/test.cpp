#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int main()		//时间复杂度为0（n^2）
{
	int n = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
		int SUM = -100000;   //给定一个足够小的最大值
		for (int i = 0; i < arr.size(); i++)
		{
			int subOfArr = 0;  //临时最大值
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
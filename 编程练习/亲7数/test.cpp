#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
class Solution 
{
public:
	static int count;
	void swap(int *o, int i, int j)
	{
		int tmp = o[i];
		o[i] = o[j];
		o[j] = tmp;
	}
	int  reletive_7(int* digit, int digitLen)
	{
		prem(digit, digitLen, 0);	
		return count;
	}
	void prem(int *arr, int len, int index)
	{
		if (len == index)
		{
			int cur = 0;
			for (int i = 0; i < len; i++)
			{
				cur = cur * 10 + arr[i];
			}
			if (cur % 7 == 0)
				count++;
		}
		else
		{
			for (int i = index; i < len; ++i)
			{
				swap(arr,index, i);
				prem(arr, len, index+1);
				swap(arr, index ,i);
			}
		}
	}

};

int Solution::count = 0;
int main()
{
	Solution s;
	int arr[] = { 1,1,2};
	cout<<s.reletive_7(arr,3);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	int maxSubArray(int* nums,int size)
	{
		int max = nums[0];
		int sum = nums[0];
		if (size <= 0)
			return 0;
		for (int i = 1; i<size; i++)
		{
			if (sum<0)
				sum = nums[i];
			else
			{
				sum += nums[i];
			}
			if (sum>max)
				max = sum;
		}
		return max;
	}
};
int main()
{
	Solution s;

	int *array = new int[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
	}
	int size = sizeof(array) / sizeof(int);	
	int ret = s.maxSubArray(array,size);
	cout << ret<<endl;
	system("pause");
	return 0;
}
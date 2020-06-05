#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	int fun(vector<int> &arr)
	{
		int left = 0;
		int right = arr.size() - 1;
		while (left < right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] <= arr[right])
				right--;
			else
				left++;
		}
		return arr[left];
	}
};
int main()
{
	Solution s;
	vector<int> arr;
	int a = 0;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	int min = s.fun(arr);
	cout << "最小值是：" << min << endl;
	system("pause");
	return 0;
}
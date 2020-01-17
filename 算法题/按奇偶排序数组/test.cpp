#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) 
	{
		int left = 0;
		int right = A.size() - 1;
		while (left<right)
		{
			while (A[left] % 2 == 0&& left<right)left++;
			while (A[right] % 2 == 1&& left<right)right--;
			swap(A[left++], A[right--]);
		}
		return A;
	}
};
int main()
{
	Solution s;
	vector<int> arr;
	vector<int> ret;
	int a = 0;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	ret = s.sortArrayByParity(arr);
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i];
	}
	system("pause");
	return 0;
}
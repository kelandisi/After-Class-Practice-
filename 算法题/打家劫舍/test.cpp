#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�
Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ��
����������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ�������

����һ������ÿ�����ݴ�Ž��ķǸ��������飬�������ڲ���������װ�õ�����£�
�ܹ�͵�Ե�����߽�
*/
class Solution {
public:
	int rob(vector<int>& nums) {
		int even = 0;
		int odd = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i % 2 == 0)
			{
				even += nums[i];
				even = max(even, odd);
			}
			else
			{
				odd += nums[i];
				odd = max(even, odd);
			}	
		}
		return max(odd, even);
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
	s.rob(arr);
	system("pause");
	return 0;
}
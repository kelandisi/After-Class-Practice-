#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
/*����һ���Ѱ����������� ���������飬�ҵ�������ʹ���������֮�͵���Ŀ������

����Ӧ�÷����������±�ֵ index1 �� index2������ index1 ����С�� index2��
*/
class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		int i = 0;
		int j = numbers.size() - 1;
		int sum = 0;
		while (i < j)
		{
			sum = numbers[i] + numbers[j];
			if (sum < target)
				i++;
			else if (sum>target)
				j--;
			else
				return{ i + 1,j + 1 };
		}
		return{ -1,-1 };
	}
};
int main()
{
	Solution s;
	int a = 0;
	int k = 0;
	vector<int> arr;
	vector<int> temp;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> k;
	temp = s.twoSum(arr,k);
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i]+1<<" ";
	}
	system("pause");
	return 0;
}
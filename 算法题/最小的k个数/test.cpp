#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		vector <int> arr;
		int i = 0;
		int j = 0;
		for (i = 0; i<input.size() - 1; i++)
		{
			for (j = 0; j<input.size() - 1 - i; j++)
			{
				if (input[j]>input[j + 1])
				{
					int temp = 0;
					temp = input[j];
					input[j] = input[j + 1];
					input[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i<k; i++)
		{
			arr.push_back(input[i]);
		}
		return arr;

	}
};
int main()
{
	Solution s;
	vector<int> input;
	vector<int> ret;
	int a = 0;
	while (cin>>a)
	{
		input.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	int k = 0;
	cin >> k;
	ret = s.GetLeastNumbers_Solution(input, k);
	for (int i = 0; i < ret.size()-1; i++)
	{
		cout << ret[i]<<" ";
	}
	cout << ret[ret.size()-1];
	system("pause");
	return 0;
}
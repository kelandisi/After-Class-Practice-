#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		vector<int> arr(128, -1);
		int sum = 0;
		int left = -1;
		for (int i = 0; i < s.size(); i++)
		{
			left = max(left, arr[s[i]]);
			arr[s[i]] = i;
			sum = max(sum, i - left);
		}
		return sum;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	cout<<s.lengthOfLongestSubstring(str);
	system("pause");
	return 0;
}
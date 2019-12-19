#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution
{
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.size() == 0)
			return "";
		string pre = strs[0];
		for (int i = 1; i < strs.size(); i++)
		{
			while (strs[i].find(pre)!=0)
			{
				if (pre == "")
					return "";
				pre = pre.substr(0, pre.size() - 1);
			}
		}
		return pre;
	}
};

int main()
{
	Solution s;
	vector<string> strs;
	string a;
	while (cin >> a)
	{
		strs.push_back(a);
		if (cin.get() == '\n')//如果是回车符则跳出循环
			break;
	}
	string ret;
	ret = s.longestCommonPrefix(strs);
	cout << ret;
	system("pause");
	return 0;
}
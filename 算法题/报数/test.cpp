#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution 
{
public:
	string countAndSay(int n) 
	{
		string s = "1";
		for (int i = 1; i < n; ++i)
		{
			string tmp;
			
			for (int j = 0; j < s.size(); j++)
			{
				int count = 1;
				while (j+1<s.size() && s[j+1]==s[j])
				{
					count++;
					j++;
				}
				tmp += to_string(count) + s[j];
			}
			s = tmp;
		}
		return s;
	}
};

int main()
{
	Solution s;
	string str = s.countAndSay(4);
	cout << str;
	system("pause");
	return 0;
}
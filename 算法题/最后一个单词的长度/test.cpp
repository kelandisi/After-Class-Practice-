#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s) {
		//return s.substr(s.rfind(' ') + 1).size();
		int res = 0;

		if (s.length() == 0)
			return 0;

		for (int i = s.length() - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
				res++;
			else
			{
				if (res)
					break;
			}
		}
		return res;
	}
};
int main()
{
	Solution s;
	string str;
	while (getline(cin,str))
	{
		cout<<s.lengthOfLastWord(str)<<endl;
	}
	
	system("pause");
	return 0;
}
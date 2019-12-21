#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Solution
{
public:
	bool isValid(string s)
	{
		stack<char> st;
		for (int i = 0; i < s.size(); ++i)
		{
			if (st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
				return false;
			if ((s[i] == ')' || s[i] == '}' || s[i] == ']'))
			{
				if (s[i] - st.top() == 1 || s[i] - st.top() == 2)
				{
					st.pop();
				}
				else
					return false;
			}
			else
			{
				st.push(s[i]);
			}
		}
		if (st.empty())
			return true;
		else
			return false;
	}
};
int main()
{
	Solution s;
	string str;
	while (cin>>str)
	{
		if (s.isValid(str))
			cout << "true"<<endl;
		else
			cout << "false"<<endl;
	}
	system("pause");
	return 0;
}


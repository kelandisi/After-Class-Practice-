#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution
{
public:
	string removeDuplicates(string S)
	{
		stack <char> st;
		int len = S.size();
		for (int i = 0; i < len; i++)
		{
			if (!st.empty())
			{
				if (st.top() == S[i])
					st.pop(); 
				else
					st.push(S[i]);
			}
			else
				st.push(S[i]);
		}
		string ss = "";
		while (!st.empty())
		{
			ss = st.top() + ss;
			st.pop();
		}
		return ss;
	}
};


//Ä£ÄâÊµÏÖÕ»
class Solution {
public:
	string removeDuplicates(string S) {
		string res = "";
		for (auto ch : S) {
			if (res.empty() || ch != res.back())
				res.push_back(ch);
			else
				res.pop_back();
		}
		return res;
	}
};

int main()
{
	Solution s;
	string str;
	cin >> str;
	string ret = s.removeDuplicates(str);
	cout << ret;
	system("pause");
	return 0;
}
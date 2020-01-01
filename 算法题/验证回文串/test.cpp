#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	bool isPalindrome(string s) {
		if (s.size()<=1)
			return true;
		int i = 0;
		int j = s.size() - 1;
		while (i < j)
		{
			while (i<j && !isalnum(s[i]))
			{
				i++;
			}
			while (i<j && !isalnum(s[j]))
			{
				j--;
			}

			if (tolower(s[i++]) != tolower(s[j--]))
				return false;
		}
		return true;
		
	}
};

int main()
{
	Solution s2;
	string s;
	while (getline(cin,s))
	{
		if (s2.isPalindrome(s))
			cout << "true"<<endl;
		else
			cout << "false"<<endl;
	}
	
	system("pause");
	return 0;
}
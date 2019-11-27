#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
string FindSameStr(string &s1, string &s2)
{
	string s3 = (s1.length() <= s2.length()) ? s1 : s2;
	string s4 = (s1.length() <= s2.length()) ? s2 : s1;
	for (int i = s3.length(); i > 0; i--)
	{
		for (int j = 0; j <= s3.length() - i; j++)
		{
			if (s4.find(s3.substr(j, i)) != string::npos)
			{
				return s3.substr(j, i);
			}
		}
	}
	return "";
}
int main()
{
	string s1;
	string s2;
	while (getline(cin, s1),
		getline(cin, s2))
	{
		cout<<FindSameStr(s1, s2)<<endl;
	}
	
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
void reverseall(string &s,int begin,int end)
{
	while (begin < end)
	{
		swap(s[begin++], s[end--]);
	}
}
int main()
{
	
	string s;
	
	while (getline(cin, s))
	{int n = s.size();
		reverseall(s, 0, n - 1);
		int start=0;
		int end=0;
		int i = 0;
		while (i < n)
		{
			while (i < n && s[i] == ' ')
				i++;
			start=end=i;
		
			while (i < n && s[i] != ' ')
			{
				end++;
				i++;
			}
			reverseall(s, start, end-1);
		}
		cout << s;
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

//方法一：暴力法（时间复杂度过高）
//void laststr(string &s)
//{
//	char t = s[0];
//	for (int i = 1; i < s.size(); ++i)
//	{
//		s[i - 1] = s[i];
//	}
//	s[s.size() -1] = t;
//}
//void skinstr(string &s, int m)
//{
//	while (m--)
//	{
//		laststr(s);
//	}
//}
//int main()
//{
//	string s;
//	int m = 0;
//	cin >> m;
//	cin >> s;
//	skinstr(s, m);
//	cout << s;
//	system("pause");
//	return 0;
//}


//方法二：先翻转前面的，在翻转后面的，在整体翻转
void reverseall(string &s, int begin, int end)
{
	while (begin < end)
	{
		swap(s[begin++], s[end--]);
	}
}
int main()
{
	string s;
	int m = 0;
	cin >> m;
	cin >> s;
	reverseall(s,0,m-1);
	reverseall(s, m,s.size()-1);
	reverseall(s, 0, s.size()-1);
	cout << s;

	system("pause");
	return 0;
}
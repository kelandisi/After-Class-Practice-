#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

//����һ����������ʱ�临�Ӷȹ��ߣ�
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


//���������ȷ�תǰ��ģ��ڷ�ת����ģ������巭ת
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
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{	//方法一
	/*string s;
	while (getline(cin, s))
	{
		reverse(s.begin(), s.end());
		cout << s << endl;
	}*/

	//方法二
	string s;

	while (getline(cin, s))
	{
		int i = 0;
		int j = s.size()-1;
		for (i=0; i < j; i++, j--)
		{
			char tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
		}
		cout << s << endl;
	}
	
	system("pause");
	return 0;
}
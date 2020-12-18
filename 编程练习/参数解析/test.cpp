#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


void jiexi(string &str)
{
	int count = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == ' ')
			count++;
		if (str[i] == '"')
		{
			do
			{
				i++;
			} while (str[i] != '"');
		}
	}
	cout << count + 1 << endl;

	int falg = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '"')
			falg ^= 1;
		if (str[i] != ' ' && str[i]!='"')
			cout << str[i];
		if (str[i] == ' ' && falg == 1)
			cout << str[i];
		if (str[i] == ' ' && falg == 0)
			cout << endl;
	}
	cout << endl;
}
int main()
{
	string str;
	getline(cin, str);

	jiexi(str);
	system("pause");
	return 0;
}


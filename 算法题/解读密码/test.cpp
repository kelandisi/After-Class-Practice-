#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i<str.size(); i++) 
		{
			if (isdigit(str[i]))  
				cout << str[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
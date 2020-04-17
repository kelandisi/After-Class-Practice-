#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{	
	string s1;
	string s2;
	while (cin >> s1 >> s2)
	{
		map <char, int> m1, m2;
		for (int i = 0; i < s1.size(); i++)
		{
			m1[s1[i]]++;
		}
		for (int i = 0; i < s2.size(); i++)
		{
			m2[s2[i]]++;
		}
		for (int i = 'A'; i <= 'Z'; i++)
		{
			if (m1[i] < m2[i])
			{
				cout << "No" << endl;
				break;
			}
			if (i == 'Z')
			{
				cout << "Yes" << endl;
			}
		}	
	}
	
	
	system("pause");
	return 0;
}

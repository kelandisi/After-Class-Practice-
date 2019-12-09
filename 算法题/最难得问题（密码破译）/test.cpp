#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <string>
using namespace std;
//int main()
//{
	/*string s;
	while (cin >> s)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A')
			{
				if (s[i] > 'E')
				{
					s[i]=s[i]- 5;
				}
				else 
				{
					s[i]=s[i]+ 21;
				}
			}
		}
		cout << s;

	}*/


	int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if ('A' <= c) {
			c = 'E' < c ? (c - 5) : (c + 21);
		}
		putchar(c);
	}
	system("pause");
	return 0;
}

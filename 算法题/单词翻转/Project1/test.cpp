#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char temp;
	getline(cin, s);
	int ret = s.length()-1;
	int begin = 0;
	int end = ret;
	while (begin < end)
	{
		temp = s[begin];
		s[begin] = s[end];
		s[end] = temp;
		begin++;
		end--;
	}

	ret = 0;
	while (s[ret])
	{
		if (s[ret] != ' ')
		{
			begin = ret;
			while (s[ret] != ' ' && s[ret])	//ÕÒendµÄÎ»ÖÃ
			{
				ret++;
			}
			ret = ret - 1;
			end = ret;
		}
		while (begin < end)
		{
			temp = s[begin];
			s[begin] = s[end];
			s[end] = temp;
			begin++;
			end--;
		}
		ret++;
	}

	cout << s;
	system("pause");
}

#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
string getMaxCommonStr(string str1, string str2) 
{
	string res;
	int len = str1.size()<str2.size() ? str1.size() : str2.size();
	for (int i = len; i>0; i--) 
	{
		for (int j = 0; j <= str1.size() - i; j++) 
		{
			string subStr = str1.substr(j, i);
			if (str2.find(subStr) != string::npos)
			{
				res = subStr;
				return res;
			}
		}
	}
}
int main()
{
	string str1, str2;
	while (getline(cin,str1), getline(cin, str2)) 
	{
		string res = getMaxCommonStr(str1, str2);
		cout << res.size() << endl;
	}
	return 0;
}
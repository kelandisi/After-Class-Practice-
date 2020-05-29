#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int dayOfYear(string date)
	{
		int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int year = (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
		int month = (date[5] - '0') * 10 + (date[6] - '0');
		if (year % 100 == 0 && year % 400 == 0)
			day[2]++;
		int ret = 0;
		for (int i = 0; i < month; i++)
		{
			ret += day[i];
		}
		return ret + (date[8] - '0') * 10 + (date[9] - '0');
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	cout<<s.dayOfYear(str)<<endl;
	system("pause");
	return 0;
}
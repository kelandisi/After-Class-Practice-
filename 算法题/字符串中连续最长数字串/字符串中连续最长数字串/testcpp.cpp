#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string temp;						//用来存放所有的数字串
	string maxnumstr;					//用来存放最大的数组串
	int maxlenth = 0;					//最大的数字串的长度
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] >= '0'&& str[i] <= '9')
		{
			while (str[i] >= '0'&& str[i] <= '9')		//	这一个看似和上面的if一样，但是千万不能省略，因为这是把数字串存入temp中
			{
				temp = temp + str[i];
				i++;
			}
			if (temp.length() > maxlenth)
			{
				maxnumstr = temp;
				maxlenth = temp.length();
			}
		}
		temp.clear();					//清空操作，清空那些不匹配的数字串
	}	
	cout << maxnumstr;
	system("pause");
	return 0;
}

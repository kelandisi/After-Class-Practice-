#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string defangIPaddr(string address) {
		int len = address.size();//直接计算出IP地址的长度
		for (int i = 0; i < len; i++)//遍历每一个字符
		{
			if (address[i] == '.')//如果当前字符为'.'
			{
				address.insert(i, "[");//在它的前面添加'['字符
				address.insert(i + 2, "]");//在它的后面添加']'字符
				i = i + 2;//由于添加了2个字符,因此当前位置应该加上2
				len = len + 2;//字符串长度也要加上2
			}
		}
		return address;//返回处理好的IP地址
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	cout<<s.defangIPaddr(str);
	system("pause");
	return 0;
}
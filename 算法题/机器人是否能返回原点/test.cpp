#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	bool judgeCircle(string moves) {
		int h = 0, v = 0; //v: vertical h: horizontal
		for (auto i : moves) {
			if (i == 'U')    ++v;
			else if (i == 'D')   --v;
			else if (i == 'R')   ++h;
			else    --h;
		}
		return h == 0 && v == 0 ? true : false; //当垂直和水平位移为0时，说明机器人返回原点
	}
};

int main()
{
	Solution s;
	string str;
	cin >> str;

	if (s.judgeCircle(str))
		cout << "true";
	else
		cout << "false";
	system("pause");
	return 0;
}


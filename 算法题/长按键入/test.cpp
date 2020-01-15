#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
/*标题以typed为外循化，挨个遍历然后与name中的字符进行比较。
如果相等name和typed同时向后移动一个字符，不相等typed移动一个字符。
最后循环结束，我们只需要查看j是否等于name的长度就行了*/

using namespace std;
class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int j = 0;
		for (int i = 0; i < typed.size(); i++)
		{
			if (name[j] == typed[i])
				j++;
		}
		if (j != name.size())
			return false;
		else
			return true;
	}
};
int main()
{
	string name;
	string typed;
	cin >> name;
	cin >> typed;
	Solution s;
	if (s.isLongPressedName(name, typed))
		cout << "真";
	else
		cout << "假";
	system("pause");
	return 0;
}
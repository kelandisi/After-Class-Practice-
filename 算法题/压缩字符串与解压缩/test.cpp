#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
	vector <char>compress(vector<char>& chars) {
		int n = chars.size();
		int cur = 0;
		for (int i = 0, j = 0; i < n; j = i) {
			while (i < n && chars[i] == chars[j]) {
				i++;//记录连续相同的值
			}
			chars[cur++] = chars[j];//将记录过的字符覆盖
			if (i - j == 1) {
				continue;//处理单独字符
			}
			string s = to_string(i - j);//将连续的字符个数的数字转换为字符
			for (int t = 0; t < s.size(); t++) {
				chars[cur++] = s[t];//
			}
		}
		return chars;
	}
};
int main()
{
	Solution s;
	vector<char> arr;
	vector<char> ret;

	char a;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	ret = s.compress(arr);
	for (int i = 0; i < ret.size() - 1; i++)
	{
		cout << ret[i] << " ";
	}
	system("pause");
	return 0;
}

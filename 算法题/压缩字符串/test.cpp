#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;

	class Solution {
	public:
		int compress(vector<char>& chars) {
			int n = chars.size();
			int cur = 0;
			for (int i = 0, j = 0; i < n; j = i) {
				while (i < n && chars[i] == chars[j]) {
					i++;
				}
				chars[cur++] = chars[j];
				if (i - j == 1) {
					continue;
				}
				string s = to_string(i - j);
				for (int t = 0; t < s.size(); t++) {
					chars[cur++] = s[t];
				}
			}
			return cur;
		}
	};
	int main()
	{
		Solution s;
		vector<char> arr;
		int a = 0;
		while (cin>>a)
		{
			arr.push_back(a);
			if (cin.get() == '\n')
				break;
		}	

		int ret= s.compress(arr);
		cout << ret;

		system("pause");
		return 0;

	}

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
	int numSpecialEquivGroups(vector<string>& A) {
		unordered_set<string> cache;
		for (auto word : A) {
			string odd = "";
			string even = "";
			int cnt = -1;
			for (auto ch : word) {
				if (++cnt & 1) even.push_back(ch);
				else odd.push_back(ch);
			}
			sort(even.begin(), even.end());
			sort(odd.begin(), odd.end());
			cache.insert(even + odd);
		}
		return cache.size();
	}
};
int main()

{
	Solution s;
	string str;
	vector <string> arr;
	int a = 0;
	while (cin>>str)
	{
		arr.push_back(str);
		if (cin.get() == '\n')
			break;
	}
	int ret = s.numSpecialEquivGroups(arr);
	cout << ret;
	system("pause");
	return 0;
}
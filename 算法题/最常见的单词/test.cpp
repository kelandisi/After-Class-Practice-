#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
	string mostCommonWord(string paragraph, vector<string>& banned) {
		set<string> bd;
		map<string, int> freq;
		string fs;
		int fn = 0;
		for (string s : banned)
		{
			bd.insert(s);
		}
		transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
		int i = 0;
		int j = 0;
		string s;
		while (i<paragraph.size())
		{
			while (j<paragraph.size() && isalpha(paragraph[j]))
			{
				j++;
			}
			s = paragraph.substr(i, j - i);
			while (j<paragraph.size() && !isalpha(paragraph[j]))
				j++;
			i = j;

			if (bd.count(s)>0)
				continue;
			freq[s]++;
			if (freq[s]>fn)
			{
				fn = freq[s];
				fs = s;
			}
		}
		return fs;

	}
};
int main()
{
	string str;
	getline(cin,str);
	vector<string> arr;
	string a;
	while (cin>>a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	Solution s;
	string ret = s.mostCommonWord(str, arr);
	cout << ret;
	system("pause");
	return 0;
}
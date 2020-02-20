#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		vector<string> codes{ ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
		unordered_set<string> s;
		for (auto& word : words) {
			string e;
			for (auto c : word) {
				e += codes[c - 'a'];
			}
			s.insert(e);
		}
		return s.size();
	}
};
int main()
{
	string str;
	vector <string> arr;
	while (cin>>str)
	{
		arr.push_back(str);
		if (cin.get() == '\n')
			break;
	}
	Solution s;
	int ret = s.uniqueMorseRepresentations(arr);
	cout << ret;

	system("pause");
	return 0;
}

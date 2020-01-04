#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<set>
using namespace std;
class Solution {
public:
	string reverseVowels(string s) {
		set<char> a;
		a.insert('a');a.insert('e');
		a.insert('i');a.insert('o');a.insert('u');a.insert('A');a.insert('E');a.insert('I');a.insert('O');
		a.insert('U');
		int begin = 0;


		int end = s.size() - 1;
		while (begin<end)
		{
			while (!(a.find(s[begin]) != a.end())&& begin<end)
			{
				begin++;
			}
			while ( !(a.find(s[end]) != a.end())&& begin<end)
			{
				end--;
			}
			swap(s[begin], s[end]);
			begin++;
			end--;
		}
		return s;
	}
};
int main()
{
	Solution p;
	string s;
	getline(cin, s);
	string ret = p.reverseVowels(s);
	for (int i = 0; i < s.size(); i++)
	{
		cout << ret[i];
	}
	system("pause");
	return 0;
}
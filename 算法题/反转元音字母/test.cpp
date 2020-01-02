#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<set>
using namespace std;
class Solution {
public:
	string reverseVowels(string s) {
		set<char> a;
		a.insert('a');
		a.insert('e');
		a.insert('i');
		a.insert('o');
		a.insert('u');
		a.insert('A');
		a.insert('E');
		a.insert('I');
		a.insert('O');
		a.insert('U');
		int i = 0;
		int j = s.size() - 1;
		while (i<j)
		{
			while (!(a.find(s[i]) != a.end())&&i<j)
			{
				i++;
			}
			while ( !(a.find(s[j]) != a.end())&&i<j )
			{
				j--;
			}
			swap(s[i], s[j]);
			i++;
			j--;
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
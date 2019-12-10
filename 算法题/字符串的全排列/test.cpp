#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
void Allpre(string &perm, int from, int to)
{
	if (to <= 1)
		return;
	if (from == to)
	{
		for (int i = 0; i <= to; i++)
		{
			cout << perm[i];
		}
		cout << endl;
	}
	else
	{
		for (int j = from; j <= to; j++)
		{
			swap(perm[j],perm[from]);
			Allpre(perm, from + 1, to);
			swap(perm[j], perm[from]);
		}
	}
}
int main()
{
	string s;
	cin >> s;
	Allpre(s, 0,s.size()-1);
	system("pause");
	return 0;
}
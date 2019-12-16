#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<set>
using namespace std;
bool islex(set<string>st, vector<string>vec)
{
	set<string>::iterator sit = st.begin();
	vector<string>::iterator vit = vec.begin();
	while (sit != st.end() && vit != vec.end())
	{
		if (*sit == *vit)
		{
			sit++;
			vit++;
		}
		else
			return false;
	}
	return true;
}

bool islen(vector<string> vec)
{
	for (int i = 0; i<vec.size() - 1; i++)
	{
		if (vec[i].size()>vec[i + 1].size())
			return false;
	}
	return true;
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<string>vec;
		set<string>st;
		for (int i = 0; i<n; i++)
		{
			string str;
			cin >> str;
			vec.push_back(str);
			st.insert(str);
		}
		if (islex(st, vec) && islen(vec))
			cout << "both" << endl;
		else if (islex(st, vec))
			cout << "lexicographically" << endl;
		else if (islen(vec))
			cout << "lengths" << endl;
		else
			cout << "none" << endl;
	}
}
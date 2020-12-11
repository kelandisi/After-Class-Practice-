#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<unordered_map>
#include<stack>
using namespace std;
/*第一题：组队竞赛
牛牛举办了一次编程比赛, 参加比赛的有3n个选手, 每个选手都有一个水平值a_i.现在要将这些选手进行组队, 一共组成n个队伍, 即每个队伍3人.牛牛发现队伍的水平值等于该队伍队员中第二高水平值。
例如 :
一个队伍三个队员的水平值分别是3, 3, 3.那么队伍的水平值是3
一个队伍三个队员的水平值分别是3, 2, 3.那么队伍的水平值是3
一个队伍三个队员的水平值分别是1, 5, 2.那么队伍的水平值是2
为了让比赛更有看点, 牛牛想安排队伍使所有队伍的水平值总和最大。
如样例所示 :
如果牛牛把6个队员划分到两个队伍
如果方案为 :
team1 : {1, 2, 5}, team2 : {5, 5, 8}, 这时候水平值总和为7.
	而如果方案为 :
	team1 : {2, 5, 8}, team2 : {1, 5, 5}, 这时候水平值总和为10.
	没有比总和为10更大的方案, 所以输出10.
	输入描述 :
	输入的第一行为一个正整数n(1 ≤ n ≤ 10 ^ 5)
	第二行包括3n个整数a_i(1 ≤ a_i ≤ 10 ^ 9), 表示每个参赛选手的水平值.
	输出描述 :
	输出一个整数表示所有队伍的水平值总和最大值.
	示例1
	输入
	2
	5 2 8 5 1 5
	输出
	10*/

#if 0

long long fun(int n, vector<int> &arr)
{
	long long sum = 0;
	sort(arr.begin(), arr.end());
	for (int i = n; i <= 3 * n - 2; i += 2)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int n = 0;
	cin >> n;
	vector<int> arr(3*n);
	for (int i = 0; i<3 * n; ++i)
	{
		cin >> arr[i];
	}
	cout << fun(n, arr);
	system("pause");
	return 0;
}
#endif


//第二题 删除公共字符
#if 0
//第一种解法：暴力遍历
string fun1( string &s1,  string &s2)
{
	for (int i = 0; i < s2.size(); ++i)
	{
		int index;
		while ((index = s1.find(s2[i])) != -1)
		{
			s1.erase(index, 1);
		}
	}
	return s1;
}


/*第二种解法：unorder_map这里我们用到了unordered_map,
通过unordered_map统计第二个字符串中的所有字符，
然后遍历第一个字符串，找第一个字符串中的字符在第二个字符串中也有的，
就不添加到临时创建的字符串ret中，
剩下未出现在第二个字符串中的字符就添加至ret中，
最后输出ret就是删除了第二个字符串中所有字符的第一个字符串。*/

string fun2(string s1, string s2)
{
	string tmp = "";
	unordered_map<char, int>  mp;
	for (auto&e : s2)
	{
		mp[e]++;
	}
	for (int i = 0; i < s1.size(); ++i)
	{
		if (mp.find(s1[i]) != mp.end() && mp[s1[i]]>0)//从s1中找到s2的字符
			continue;
		tmp += s1[i];
	}
	return tmp;
}
int main()
{
	string str1;
	string str2;
	getline(cin,str1);
	getline(cin, str2);
	cout<<fun2(str1, str2);
	system("pause");
	return 0;
} 
#endif




//第三题：倒置字符串(用栈)
#if 0
stack<char>	 fun(string str, stack<char> st1, stack<char> st2)
{
	
	for (int i = 0; i <= str.size(); ++i)
	{
		char tmp='0';
		if (str[i] == ' ' || str[i] == '\0')
		{
			st1.push(' ');
			while (st1.size() != 0)
			{
				tmp = st1.top();
				st2.push(tmp);
				st1.pop();
			}
		}
		else
		{
			st1.push(str[i]);
		}
	}
	return st2;
}

int main()
{
	stack<char> st1;
	stack<char> st2;
	string str;
	getline(cin, str);
	st2 = fun(str,st1,st2);
	while (st2.size() != 0)
	{
		cout << st2.top();
		st2.pop();
	}
	system("pause");
	return 0;
}
#endif

//第四题：排序子序列
int main()
{
	int n = 0;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int res = 1;
	for (int i = 1; i < arr.size()-1; i++)
	{
		if ((arr[i] > arr[i - 1] && arr[i]>arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
		{
			res++;
			if (n - 3 != i) i++;
		}
	}
	cout << res;
	system("pause");
	return 0;
}
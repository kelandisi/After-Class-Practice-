#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<unordered_map>
#include<stack>
using namespace std;
/*��һ�⣺��Ӿ���
ţţ�ٰ���һ�α�̱���, �μӱ�������3n��ѡ��, ÿ��ѡ�ֶ���һ��ˮƽֵa_i.����Ҫ����Щѡ�ֽ������, һ�����n������, ��ÿ������3��.ţţ���ֶ����ˮƽֵ���ڸö����Ա�еڶ���ˮƽֵ��
���� :
һ������������Ա��ˮƽֵ�ֱ���3, 3, 3.��ô�����ˮƽֵ��3
һ������������Ա��ˮƽֵ�ֱ���3, 2, 3.��ô�����ˮƽֵ��3
һ������������Ա��ˮƽֵ�ֱ���1, 5, 2.��ô�����ˮƽֵ��2
Ϊ���ñ������п���, ţţ�밲�Ŷ���ʹ���ж����ˮƽֵ�ܺ����
��������ʾ :
���ţţ��6����Ա���ֵ���������
�������Ϊ :
team1 : {1, 2, 5}, team2 : {5, 5, 8}, ��ʱ��ˮƽֵ�ܺ�Ϊ7.
	���������Ϊ :
	team1 : {2, 5, 8}, team2 : {1, 5, 5}, ��ʱ��ˮƽֵ�ܺ�Ϊ10.
	û�б��ܺ�Ϊ10����ķ���, �������10.
	�������� :
	����ĵ�һ��Ϊһ��������n(1 �� n �� 10 ^ 5)
	�ڶ��а���3n������a_i(1 �� a_i �� 10 ^ 9), ��ʾÿ������ѡ�ֵ�ˮƽֵ.
	������� :
	���һ��������ʾ���ж����ˮƽֵ�ܺ����ֵ.
	ʾ��1
	����
	2
	5 2 8 5 1 5
	���
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


//�ڶ��� ɾ�������ַ�
#if 0
//��һ�ֽⷨ����������
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


/*�ڶ��ֽⷨ��unorder_map���������õ���unordered_map,
ͨ��unordered_mapͳ�Ƶڶ����ַ����е������ַ���
Ȼ�������һ���ַ������ҵ�һ���ַ����е��ַ��ڵڶ����ַ�����Ҳ�еģ�
�Ͳ���ӵ���ʱ�������ַ���ret�У�
ʣ��δ�����ڵڶ����ַ����е��ַ��������ret�У�
������ret����ɾ���˵ڶ����ַ����������ַ��ĵ�һ���ַ�����*/

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
		if (mp.find(s1[i]) != mp.end() && mp[s1[i]]>0)//��s1���ҵ�s2���ַ�
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




//�����⣺�����ַ���(��ջ)
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

//�����⣺����������
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
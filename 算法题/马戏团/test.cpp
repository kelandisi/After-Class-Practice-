	#define _CRT_SECURE_NO_WARNINGS 1

	/*�Ѻ�Ա��С��������ü�����������Σ���ĳ��С������һ����Ϸ�ű��ݣ�
	���ʵı��ݽ��������ų����ʹ��������ǰ�������ۣ�С�����������˽⵽��
	��Ϸ���������һ���½�Ŀ������޺�����������Ϸ��Ա���޺����ݡ����ǵ���ȫ���أ�
	Ҫ����޺������У�վ��ĳ���˼��ϵ���Ӧ�üȱ��Լ����ֱ��Լ��ݣ�����ȡ� 
	�ų���Ҫ���ν�Ŀ�е��޺���������ߣ����������ڶ࣬����ͷ����ΰ�����Ա�����⡣
	С�������������ܼ򵥣�����ͳ���˲�������޺������ݵ�������Ա��������أ�
	���Һܿ��ҵ�������޺�������Ա���С� ����������Ҳ�õ�������һ��������ر�
	���ҳ����Ե���������޺����ĸ߶ȣ���ݱ�����Ϸ��Ա���α��Ϊ1��N��

	�������� :
	����һ��������N����ʾ��Ա������
	֮��N�У�ÿ�����������ֱ��Ӧ��Ϸ��Ա��ţ����غ���ߡ�


	������� :
	������m����ʾ�޺����ĸ߶ȡ�
	*/

#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
struct people
{
	int id;
	int weight;
	int height;
};

bool cmp(people p1, people p2)
{
	if (p1.weight != p2.weight)
		return p1.weight < p2.weight;
	else
		return p1.height > p2.height;
}
int main()
{
	int n;
	while (cin >> n)
	{
		vector <people> v(n);
		for (int i = 0; i <n ; i++)
		{
			cin >> v[i].id >> v[i].weight >> v[i].height;
		}
		sort(v.begin(), v.end(), cmp);
		vector <int> dp(n, 0);
		for (int i = 0; i < n; i++)
		{
			dp[i] = 1;
			for (int j = 0; j < i; j++)
			{
				if ((v[i].height >= v[j].height)&&(dp[j]+1)>dp[i])
				{
					dp[i] =dp[j] + 1;
				}
			}
		}
		cout << *max_element(dp.begin(), dp.end())<<endl;
	}	
	system("pause");
	return 0;
}


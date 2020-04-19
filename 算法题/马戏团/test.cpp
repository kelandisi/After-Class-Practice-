	#define _CRT_SECURE_NO_WARNINGS 1

	/*搜狐员工小王最近利用假期在外地旅游，在某个小镇碰到一个马戏团表演，
	精彩的表演结束后发现团长正和大伙在帐篷前激烈讨论，小王打听了下了解到，
	马戏团正打算出一个新节目“最高罗汉塔”，即马戏团员叠罗汉表演。考虑到安全因素，
	要求叠罗汉过程中，站在某个人肩上的人应该既比自己矮又比自己瘦，或相等。 
	团长想要本次节目中的罗汉塔叠的最高，由于人数众多，正在头疼如何安排人员的问题。
	小王觉得这个问题很简单，于是统计了参与最高罗汉塔表演的所有团员的身高体重，
	并且很快找到叠最高罗汉塔的人员序列。 现在你手上也拿到了这样一份身高体重表，
	请找出可以叠出的最高罗汉塔的高度，这份表中马戏团员依次编号为1到N。

	输入描述 :
	首先一个正整数N，表示人员个数。
	之后N行，每行三个数，分别对应马戏团员编号，体重和身高。


	输出描述 :
	正整数m，表示罗汉塔的高度。
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
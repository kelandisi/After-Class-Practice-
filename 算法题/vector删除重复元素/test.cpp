#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void remove_elements(vector<int> &vec)
{
	for (auto it = vec.begin(); it != vec.end();)
	{ 
		if (*it == 3)
		{
			it = vec.erase(it);
		}
		else
			it++;

	}
}

//void remove_repeatelements(vector<int>& vec)
//{
//	sort(vec.begin(), vec.end());   //unique只能比较相邻元素是否重复
//	vec.erase(unique(vec.begin(), vec.end()), vec.end()); //unique将重复的元素移到末尾，返回末尾中第一个重复值的地址
//}

void remove_repeatelements(vector<int>& test)
{
	for (auto it = test.begin(); it != test.end();)
	{
		auto it1 = find(test.begin(), it, *it);    //若当前位置之前存在重复元素，删除当前元素,erase返回当前元素的下一个元素指针
		if (it1 != it)
			it = test.erase(it);
		else
			it++;
	}
}

int main()
{
	vector<int> vec;
	int n = 0;
	while (cin >> n)
	{
		vec.push_back(n);
		if (cin.get() == '\n')
			break;
	}
	//remove_elements(vec);
	//remove_repeatelements(vec);//不保留原顺序
	remove_repeatelements(vec);//保留原顺序

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i]<<" ";
	}
	system("pause");
	return 0;
}
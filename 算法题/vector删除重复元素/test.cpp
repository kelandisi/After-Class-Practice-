#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void remove_elements(vector<int> &vec)   //删除指定元素
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

void remove_repeatelements(vector<int>& arr)  //删除重复元素，并且保证原顺序不变
{
	for (auto it = arr.begin(); it < arr.end();)
	{
		auto it1 = find(arr.begin(), it, *it);
		if (it1 != it)
		{
			it = arr.erase(it);
		}
		else
			it++;
	}
}

vector<int> remove_repeatelements1(vector<int>& arr)//新建vector保存不重复的元素
{
	vector <int> temp;
	for (auto it = arr.begin(); it < arr.end(); it++)
	{
		auto it1 = find(arr.begin(), it, *it);
		if (it1 == it)
		{
			temp.push_back(*it);
		}
	}
	return temp;
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
	vector<int> ret = remove_repeatelements1(vec);//保留原顺序

	for (int i = 0; i < ret.size(); ++i)
	{
		cout << ret[i]<<" ";
	}
	system("pause");
	return 0;
}
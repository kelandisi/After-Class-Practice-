#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void remove_elements(vector<int> &vec)   //ɾ��ָ��Ԫ��
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
//	sort(vec.begin(), vec.end());   //uniqueֻ�ܱȽ�����Ԫ���Ƿ��ظ�
//	vec.erase(unique(vec.begin(), vec.end()), vec.end()); //unique���ظ���Ԫ���Ƶ�ĩβ������ĩβ�е�һ���ظ�ֵ�ĵ�ַ
//}

void remove_repeatelements(vector<int>& arr)  //ɾ���ظ�Ԫ�أ����ұ�֤ԭ˳�򲻱�
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

vector<int> remove_repeatelements1(vector<int>& arr)//�½�vector���治�ظ���Ԫ��
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
	//remove_repeatelements(vec);//������ԭ˳��
	vector<int> ret = remove_repeatelements1(vec);//����ԭ˳��

	for (int i = 0; i < ret.size(); ++i)
	{
		cout << ret[i]<<" ";
	}
	system("pause");
	return 0;
}
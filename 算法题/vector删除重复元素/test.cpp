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
//	sort(vec.begin(), vec.end());   //uniqueֻ�ܱȽ�����Ԫ���Ƿ��ظ�
//	vec.erase(unique(vec.begin(), vec.end()), vec.end()); //unique���ظ���Ԫ���Ƶ�ĩβ������ĩβ�е�һ���ظ�ֵ�ĵ�ַ
//}

void remove_repeatelements(vector<int>& test)
{
	for (auto it = test.begin(); it != test.end();)
	{
		auto it1 = find(test.begin(), it, *it);    //����ǰλ��֮ǰ�����ظ�Ԫ�أ�ɾ����ǰԪ��,erase���ص�ǰԪ�ص���һ��Ԫ��ָ��
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
	//remove_repeatelements(vec);//������ԭ˳��
	remove_repeatelements(vec);//����ԭ˳��

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i]<<" ";
	}
	system("pause");
	return 0;
}
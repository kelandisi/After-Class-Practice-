#pragma once
#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;


class SeqList
{
public:
	SeqList()		//默认构造函数
		:_data(new int [10])
		,_size(0)
		,_capacity(10)
	{}

	SeqList(int *array, int size)//构造函数
		:_data(new int[size])
		, _size(size)
		, _capacity(size)
	{
		//memcpy(_data, array, sizeof(int)*size);
		for (int i = 0; i < size; i++)
		{
			_data[i] = array[i];
		}
	}

	SeqList (vector<int> &arr)
	{
		int a = 0;
		while (cin >> a)
		{
			arr.push_back(a);
			if (cin.get() == '\n')
				break;
		}
		_data = new int[arr.size()];
		_size = arr.size();
		_capacity = arr.size();

		for (int i = 0; i < arr.size(); i++)
		{
			_data[i] = arr[i];
		}
		arr.clear();
	}


	SeqList(const SeqList& seq)//拷贝构造
	{
		_data = new int[seq._size];
		_size = seq._size;
		_capacity = seq._capacity;

		for (int i = 0; i < seq._size; i++)
		{
			_data[i] = seq._data[i];
		}
	}
	~SeqList()    //析构函数
	{
		if (_data)
		{
			delete[]_data;
			_data = nullptr;
			_size = 0;
			_capacity = 0;
		}
	}
///////////////////////////////////////////////////////////
//基本操作
	//尾插
	void PushBack(int data);
	//尾删
	void PopBack();
	//任意位置插入
	void Insert(int index, int data);
	//任意位置删除
	void Delete(int index);
	//大小
	int Size();
	//容量
	int Capacity();
	//判断是否为空
	int Empty();
	//获取第一个元素
	int Frist();
	//获取最后一个元素
	int Back();
	//将所有元素清空

	int GetElem(int i);
	void Clear();
	//打印顺序表

	friend ostream& operator<<(ostream& _cout, const SeqList&seq)
	{
		for (int i = 0; i < seq._size; i++)
		{
			cout << seq._data[i]<<"->";
		}
		cout << "NULL";
		return _cout;
	}

private:
	int *_data;
	int _size;
	int _capacity;
};
SeqList& hebing(SeqList&l1, SeqList&l2);
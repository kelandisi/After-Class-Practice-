#pragma once
#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;


class SeqList
{
public:
	SeqList()		//Ĭ�Ϲ��캯��
		:_data(new int [10])
		,_size(0)
		,_capacity(10)
	{}

	SeqList(int *array, int size)//���캯��
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


	SeqList(const SeqList& seq)//��������
	{
		_data = new int[seq._size];
		_size = seq._size;
		_capacity = seq._capacity;

		for (int i = 0; i < seq._size; i++)
		{
			_data[i] = seq._data[i];
		}
	}
	~SeqList()    //��������
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
//��������
	//β��
	void PushBack(int data);
	//βɾ
	void PopBack();
	//����λ�ò���
	void Insert(int index, int data);
	//����λ��ɾ��
	void Delete(int index);
	//��С
	int Size();
	//����
	int Capacity();
	//�ж��Ƿ�Ϊ��
	int Empty();
	//��ȡ��һ��Ԫ��
	int Frist();
	//��ȡ���һ��Ԫ��
	int Back();
	//������Ԫ�����

	int GetElem(int i);
	void Clear();
	//��ӡ˳���

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
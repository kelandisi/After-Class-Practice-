#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
void SeqList::PushBack(int data)
{
	_data[_size++] = data;
}

void SeqList::PopBack()
{
	assert(_size);
	_size--;
}

void SeqList::Insert(int index,int data)
{
	if (index > _size)
		return;

	for (int i = _size-1; i >= index; i--)
	{
		_data[i + 1] = _data[i];
	}
	_data[index] = data;
	_size++;
}

void SeqList::Delete(int index)
{
	if (index >= _size)
		return;

	for (int i = index; i < _size; i++)
	{
		_data[i] = _data[i+1];
	}
	_size--;
}

int SeqList::Size()
{
	return _size;
}

int SeqList::Capacity()
{
	return _capacity;
}

int SeqList::Empty()
{
	if (_size == 0)
		return 1;
	else
		return 0;
}

int SeqList::Frist()
{
	return _data[0];
}

int SeqList::Back()
{
	return _data[_size-1];
}

void SeqList::Clear()
{
	_size = 0;
}
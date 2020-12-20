#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
void SeqList::PushBack(int data)
{
	CheckCapacity();
	_data[_size++] = data;
}

void SeqList::PopBack()
{
	//assert(_size);
	_size--;
}

void SeqList::Insert(int index,int data)
{
	if (index > _size)
		return;
	CheckCapacity();
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

int SeqList::GetElem(int index)
{
	return _data[index];
}


void SeqList::CheckCapacity()
{
	if (_size >= _capacity)
	{
		int newcapacity = 2 * _capacity;
		int* _ndata = new int[newcapacity];
		for (int i = 0; i < _size; ++i)
		{
			_ndata[i] = _data[i];
		}
		delete _data;
		_data = _ndata;
		_capacity = newcapacity;
	}

}

int SeqList :: find(int e)
{
	for (int i = 0; i < _size; ++i)
	{
		if (_data[i] == e)
			return 0;		
	}
	return e;
}

void hebing(SeqList &l1, SeqList &l2)
{
	
	int e = 0;
	for (int i = 0; i < l2.Size(); ++i)
	{
		e = l2.GetElem(i);
		if (l1.find(e)!=0)
		{
			l1.PushBack(e);
		}
	}
}

int SeqList :: partition(int low, int high)
{
	int pivot = _data[low];
	while (low < high)
	{
		while (low < high && _data[high] >= pivot)
			high--;
		_data[low] =_data[high];
		while (low < high && _data[low] <= pivot)
			low++;
		_data[high] = _data[low];
	}
	_data[low] = pivot;	
	return low;
}

void SeqList :: _SeqListQsort(int low,int high)
{
	if (low < high)
	{
		int pivot = SeqList::partition(low, high);
		_SeqListQsort(low, pivot-1);
		_SeqListQsort(pivot+1, high);
	}
}
void SeqList :: SeqListQsort()
{
	SeqList::_SeqListQsort(0, _size-1);
}

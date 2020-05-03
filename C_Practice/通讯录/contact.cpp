#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void Initcontact(contact *pcon)
{
	memset(pcon->data, 0, sizeof(pcon->data));
	pcon->size = 0;
}

void addcontact(contact *pcon)
{

	if (pcon->size == MAX)
	{
		cout << "通讯录已满，无法添加！\n";
	}
	else
	{
		cout << "请输入名字>:";
		cin >> pcon->data[pcon->size].name;
		cout << "请输入性别>:";
		cin >> pcon->data[pcon->size].sex;
		cout << "请输入年龄>:";
		cin >> pcon->data[pcon->size].age;
		cout << "请输入电话>:";
		cin >> pcon->data[pcon->size].tele;
		cout << "请输入地址>:";
		cin >> pcon->data[pcon->size].addr;

		pcon->size++;
	}
	
}

int find(contact *pcon, char* name)
{
	int i = 0;
	for (i = 0; i < pcon->size; i++)
	{
		if (strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
		else
			return -1;
	}
}

void delcontact(contact *pcon)
{
	char name[MAX_NAME] = { 0 };
	if (pcon->size == 0)
		cout << "通讯录为空，无法删除！\n";
	else
	{
		cout << "请输入你要删除的名字：";
		cin >> name;
		int ret = find(pcon, name);
		if (ret == -1)
			cout << "找不到你要删除的名字\n";
		else
		{
			for (int i = ret; i < pcon->size - 1; i++)
			{
				pcon->data[i] = pcon->data[i + 1];
			}
			pcon->size--;
			cout << "删除成功！\n";	
		}
	}
}

void searchcontact(contact *pcon)
{
	char name[MAX_NAME] = { 0 };
	cout << "请输入你要查找的名字：";
	cin >> name;
	int ret = find(pcon, name);
	if (ret == -1)
	{
		cout << "查无此人！\n";
	}
	else
	{
		cout << "姓名: " << pcon->data[ret].name << endl << "年龄: " << pcon->data[ret].age << endl
			<< "性别: " << pcon->data[ret].sex << endl << "电话号码: " << pcon->data[ret].tele << endl << "家庭住址: "
			<< pcon->data[ret].addr << endl;
	}
}

void modefycontact(contact *pcon)
{
	char name[MAX_NAME] = { 0 };
	cout << "请输入你要更改的名字：";
	cin >> name;
	int ret = find(pcon, name);
	if (ret == -1)
	{
		cout << "查无此人！\n";
	}
	else
	{
		cout << "请输入名字>:";
		cin >> pcon->data[ret].name;
		cout << "请输入性别>:";
		cin >> pcon->data[ret].sex;
		cout << "请输入年龄>:";
		cin >> pcon->data[ret].age;
		cout << "请输入电话>:";
		cin >> pcon->data[ret].tele;
		cout << "请输入地址>:";
		cin >> pcon->data[ret].addr;
	}
}

void emptycontact(contact *pcon)
{
	if (pcon->size == 0)
		cout << "通讯录已经为空！\n";
	else
	{
		pcon->size = 0;
	}
}


int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct contact*)e1)->data->name, ((struct contact*)e2)->data->name);
}

void sortcontact(contact *pcon)
{
	int sz = sizeof(pcon) / sizeof(pcon[0]);
	qsort(pcon, sz, sizeof(pcon[0]), cmp_name);
	if (pcon->size == 0)
		cout << "通讯录为空！\n";
	else
		cout << "排序完成！\n";
}


void showcontact(contact *pcon)
{
	for (int i = 0; i < pcon->size; i++)
	{
		cout << "姓名: " << pcon->data[i].name << endl << "年龄: " << pcon->data[i].age << endl
			<< "性别: " << pcon->data[i].sex << endl<< "电话号码: " << pcon->data[i].tele <<endl<< "家庭住址: "
			<< pcon->data[i].addr<<endl<<endl<<endl;
	}
}
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


void delcontact(contact *pcon)
{

}

void showcontact(contact *pcon)
{
	for (int i = 0; i < pcon->size; i++)
	{
		cout << "姓名: " << pcon->data[i].name << endl << "年龄: " << pcon->data[i].age << endl
			<< "性别: " << pcon->data[i].sex << endl<< "电话号码: " << pcon->data[i].tele <<endl<< "家庭住址: "
			<< pcon->data[i].addr<<endl;
	}
}
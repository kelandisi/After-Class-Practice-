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
		cout << "ͨѶ¼�������޷���ӣ�\n";
	}
	else
	{
		cout << "����������>:";
		cin >> pcon->data[pcon->size].name;
		cout << "�������Ա�>:";
		cin >> pcon->data[pcon->size].sex;
		cout << "����������>:";
		cin >> pcon->data[pcon->size].age;
		cout << "������绰>:";
		cin >> pcon->data[pcon->size].tele;
		cout << "�������ַ>:";
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
		cout << "����: " << pcon->data[i].name << endl << "����: " << pcon->data[i].age << endl
			<< "�Ա�: " << pcon->data[i].sex << endl<< "�绰����: " << pcon->data[i].tele <<endl<< "��ͥסַ: "
			<< pcon->data[i].addr<<endl;
	}
}
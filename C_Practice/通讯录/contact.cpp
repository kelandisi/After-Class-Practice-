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
		cout << "ͨѶ¼Ϊ�գ��޷�ɾ����\n";
	else
	{
		cout << "��������Ҫɾ�������֣�";
		cin >> name;
		int ret = find(pcon, name);
		if (ret == -1)
			cout << "�Ҳ�����Ҫɾ��������\n";
		else
		{
			for (int i = ret; i < pcon->size - 1; i++)
			{
				pcon->data[i] = pcon->data[i + 1];
			}
			pcon->size--;
			cout << "ɾ���ɹ���\n";	
		}
	}
}

void searchcontact(contact *pcon)
{
	char name[MAX_NAME] = { 0 };
	cout << "��������Ҫ���ҵ����֣�";
	cin >> name;
	int ret = find(pcon, name);
	if (ret == -1)
	{
		cout << "���޴��ˣ�\n";
	}
	else
	{
		cout << "����: " << pcon->data[ret].name << endl << "����: " << pcon->data[ret].age << endl
			<< "�Ա�: " << pcon->data[ret].sex << endl << "�绰����: " << pcon->data[ret].tele << endl << "��ͥסַ: "
			<< pcon->data[ret].addr << endl;
	}
}

void modefycontact(contact *pcon)
{
	char name[MAX_NAME] = { 0 };
	cout << "��������Ҫ���ĵ����֣�";
	cin >> name;
	int ret = find(pcon, name);
	if (ret == -1)
	{
		cout << "���޴��ˣ�\n";
	}
	else
	{
		cout << "����������>:";
		cin >> pcon->data[ret].name;
		cout << "�������Ա�>:";
		cin >> pcon->data[ret].sex;
		cout << "����������>:";
		cin >> pcon->data[ret].age;
		cout << "������绰>:";
		cin >> pcon->data[ret].tele;
		cout << "�������ַ>:";
		cin >> pcon->data[ret].addr;
	}
}

void emptycontact(contact *pcon)
{
	if (pcon->size == 0)
		cout << "ͨѶ¼�Ѿ�Ϊ�գ�\n";
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
		cout << "ͨѶ¼Ϊ�գ�\n";
	else
		cout << "������ɣ�\n";
}


void showcontact(contact *pcon)
{
	for (int i = 0; i < pcon->size; i++)
	{
		cout << "����: " << pcon->data[i].name << endl << "����: " << pcon->data[i].age << endl
			<< "�Ա�: " << pcon->data[i].sex << endl<< "�绰����: " << pcon->data[i].tele <<endl<< "��ͥסַ: "
			<< pcon->data[i].addr<<endl<<endl<<endl;
	}
}
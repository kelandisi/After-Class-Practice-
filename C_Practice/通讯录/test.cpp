#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void menu()
{
	printf("********************************\n");
	printf("****   1.add        2.del   ****\n");
	printf("****   3.search     4.modify****\n");
	printf("****   5.show       6.empty ****\n");
	printf("****   7.sort       0.exit  ****\n");
	printf("********************************\n");
}
void test()
{

	int input = 0;
	contact con;
	Initcontact(&con);	
	do
	{
		menu();
		cout << "�����ѡ��>:";
		cin >> input;
		switch (input)
		{		
		case ADD:
			addcontact(&con);
			break;
		case DEL:
			delcontact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			showcontact(&con);
			break;
		case EMPTY:
			break;
		case SORT:
			break;
		case EXIT:
			cout << "�˳���" << endl;
			break;
		default:
			cout << "����������������룡" << endl;
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}
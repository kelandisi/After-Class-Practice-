#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
#include<errno.h>
using namespace std;
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 20
#define TELE_MAX 12
#define ADDR_MAX 30
#define DEFAULT_SZ 3
#define INC_SZ 2

enum action
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT,
};


typedef struct peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	short int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}peoinfo;

typedef struct contact
{
	peoinfo* data;
	int capacity;  //容量 存放当前最大容量
	int size;
}contact;


void Initcontact(contact *pcon);
void addcontact(contact *pcon);
void delcontact(contact *pcon);
void showcontact(contact *pcon);
void searchcontact(contact *pcon);
void modefycontact(contact *pcon);
void emptycontact(contact *pcon);
void sortcontact(contact *pcon);
int checkcapacity(contact *pcon);
void destroy(contact *pcon);
void savecontact(contact *pcon);
void loadcontact(contact *pcon);


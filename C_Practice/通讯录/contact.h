#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 20
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

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
	peoinfo data[MAX];
	int size;
}contact;


void Initcontact(contact *pcon);
void addcontact(contact *pcon);
void delcontact(contact *pcon);
void showcontact(contact *pcon);



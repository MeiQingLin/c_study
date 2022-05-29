#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


#define MAX 1000


//�����˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


typedef struct Contact
{
	PeoInfo date[MAX]; //�Ž���1000���˵���Ϣ
	int sz; //��¼ͨѶ¼�����м����˵���Ϣ
}Contact;


void InitPeoInfo(Contact* cp);
void AddInfo(Contact* cp);
void PrintInfo(Contact* cp);
void DelInfo(Contact* cp);
void SearchInfo(Contact* cp);
void MutifyInfo(Contact* cp);
void SortInfo(Contact* cp);
void EmptyInfo(Contact* cp);
void SortInfo(Contact* cp);

#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��ʼ��ͨѶ¼
void InitPeoInfo(Contact* cp)
{
	memset(cp->date, 0, sizeof(cp->date));
	cp->sz = 0;
}

//����˵���Ϣ
void AddInfo(Contact* cp)
{
	if (cp->sz == MAX) {
		printf("ͨѶ¼��Ա����,���ɼ�����ӡ�\n");
		return;
	}
	printf("������ͨѶ�˵�����:> ");
	scanf("%s", cp->date[cp->sz].name);
	printf("������ͨѶ�˵��Ա�:> ");
	scanf("%s", cp->date[cp->sz].sex);
	printf("������ͨѶ�˵�����:> ");
	scanf("%d", &(cp->date[cp->sz].age));
	printf("������ͨѶ�˵ĵ绰:> ");
	scanf("%s", cp->date[cp->sz].tele);
	printf("������ͨѶ�˵ĵ�ַ:> ");
	scanf("%s", cp->date[cp->sz].addr);
	cp->sz++;
	printf("��ӳɹ���\n");
}

//��ӡ�˵���Ϣ
void PrintInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("%-10s %-5s %-5s %-12s %-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("ͨѶ¼���޳�Ա��\n");
		return;
	}
	printf("%-10s %-5s %-5s %-12s %-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < cp->sz; i++) {
		printf("%-10s %-5s %-5d %-12s %-30s\n",
			cp->date[i].name,
			cp->date[i].sex,
			cp->date[i].age,
			cp->date[i].tele,
			cp->date[i].addr);
	}
}


//�����˵���Ϣ,�����±�
static int FindByName(Contact* cp, const char name[])
{
	int i = 0;
	for (i = 0; i < cp->sz; i++) {
		if (strcmp(cp->date[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}

//ɾ���˵���Ϣ
void DelInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("ͨѶ¼���޳�Ա��Ϣ,�޷�����ɾ����\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ���˵�����:> ");
	scanf("%s", name);
	//����
	int position = FindByName(cp, name);
	if (position == -1) {
		printf("δ�ҵ����˵���Ϣ��\n");
	}
	else {
		for (; position < (cp->sz) - 1; position++) {
			cp->date[position] = cp->date[position + 1];
		}
		(cp->sz)--;
		printf("ɾ���ɹ���\n");
	}
}

//�����˵���Ϣ
void SearchInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("ͨѶ¼���޳�Ա���޷����в��ҡ�\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:> ");
	scanf("%s", name);
	FindByName(cp, name);
	int position = FindByName(cp, name);
	if (position == -1) {
		printf("δ�ҵ����˵���Ϣ��\n");
	}
	else {
		printf("%-10s %-5s %-5s %-12s %-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-10s %-5s %-5d %-12s %-30s\n",
			cp->date[position].name,
			cp->date[position].sex,
			cp->date[position].age,
			cp->date[position].tele,
			cp->date[position].addr);
	}
}

//�����˵���Ϣ
void MutifyInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("ͨѶ¼���޳�Ա���޷����и��ġ�\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("����������˵�����:> ");
	scanf("%s", name);
	int position = FindByName(cp, name);
	if (position == -1) {
		printf("δ�ҵ����˵���Ϣ��\n");
	}
	else {
		printf("������ͨѶ�˸��ĺ������:> ");
		scanf("%s", cp->date[position].name);
		printf("������ͨѶ�˸��ĺ���Ա�:> ");
		scanf("%s", cp->date[position].sex);
		printf("������ͨѶ�˸��ĺ������:> ");
		scanf("%d", &(cp->date[position].age));
		printf("������ͨѶ�˸��ĺ�ĵ绰:> ");
		scanf("%s", cp->date[position].tele);
		printf("������ͨѶ�˸��ĺ�ĵ�ַ:> ");
		scanf("%s", cp->date[position].addr);
		printf("���ĳɹ���\n");
	}
}

//��������˵���Ϣ
void EmptyInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("ͨѶ¼���޳�Ա���޷�������ա�\n");
		return;
	}
	while (cp->sz) {
		(cp->sz)--;
		;
	}
	printf("�����ɡ�\n");
}




static int Compare(const void* e1,const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
//����ϵ�˰�������ĸ��������
void SortInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("ͨѶ¼���޳�Ա���޷���������\n");
		return;
	}
	qsort(cp->date,cp->sz,sizeof(cp->date[0]), Compare);
}




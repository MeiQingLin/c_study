#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化通讯录
void InitPeoInfo(Contact* cp)
{
	memset(cp->date, 0, sizeof(cp->date));
	cp->sz = 0;
}

//添加人的信息
void AddInfo(Contact* cp)
{
	if (cp->sz == MAX) {
		printf("通讯录人员已满,不可继续添加。\n");
		return;
	}
	printf("请输入通讯人的姓名:> ");
	scanf("%s", cp->date[cp->sz].name);
	printf("请输入通讯人的性别:> ");
	scanf("%s", cp->date[cp->sz].sex);
	printf("请输入通讯人的年龄:> ");
	scanf("%d", &(cp->date[cp->sz].age));
	printf("请输入通讯人的电话:> ");
	scanf("%s", cp->date[cp->sz].tele);
	printf("请输入通讯人的地址:> ");
	scanf("%s", cp->date[cp->sz].addr);
	cp->sz++;
	printf("添加成功。\n");
}

//打印人的信息
void PrintInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("%-10s %-5s %-5s %-12s %-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("通讯录暂无成员。\n");
		return;
	}
	printf("%-10s %-5s %-5s %-12s %-30s\n", "姓名", "性别", "年龄", "电话", "地址");
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


//查找人的信息,返回下标
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

//删除人的信息
void DelInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("通讯录暂无成员信息,无法进行删除。\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除人的姓名:> ");
	scanf("%s", name);
	//查找
	int position = FindByName(cp, name);
	if (position == -1) {
		printf("未找到该人的信息。\n");
	}
	else {
		for (; position < (cp->sz) - 1; position++) {
			cp->date[position] = cp->date[position + 1];
		}
		(cp->sz)--;
		printf("删除成功。\n");
	}
}

//查找人的信息
void SearchInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("通讯录暂无成员，无法进行查找。\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的姓名:> ");
	scanf("%s", name);
	FindByName(cp, name);
	int position = FindByName(cp, name);
	if (position == -1) {
		printf("未找到该人的信息。\n");
	}
	else {
		printf("%-10s %-5s %-5s %-12s %-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-10s %-5s %-5d %-12s %-30s\n",
			cp->date[position].name,
			cp->date[position].sex,
			cp->date[position].age,
			cp->date[position].tele,
			cp->date[position].addr);
	}
}

//更改人的信息
void MutifyInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("通讯录暂无成员，无法进行更改。\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入更改人的姓名:> ");
	scanf("%s", name);
	int position = FindByName(cp, name);
	if (position == -1) {
		printf("未找到此人的信息。\n");
	}
	else {
		printf("请输入通讯人更改后的姓名:> ");
		scanf("%s", cp->date[position].name);
		printf("请输入通讯人更改后的性别:> ");
		scanf("%s", cp->date[position].sex);
		printf("请输入通讯人更改后的年龄:> ");
		scanf("%d", &(cp->date[position].age));
		printf("请输入通讯人更改后的电话:> ");
		scanf("%s", cp->date[position].tele);
		printf("请输入通讯人更改后的地址:> ");
		scanf("%s", cp->date[position].addr);
		printf("更改成功。\n");
	}
}

//清空所有人的信息
void EmptyInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("通讯录暂无成员，无法进行清空。\n");
		return;
	}
	while (cp->sz) {
		(cp->sz)--;
		;
	}
	printf("清空完成。\n");
}




static int Compare(const void* e1,const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
//对联系人按名称字母进行排序
void SortInfo(Contact* cp)
{
	if (cp->sz == 0) {
		printf("通讯录暂无成员，无法进行排序。\n");
		return;
	}
	qsort(cp->date,cp->sz,sizeof(cp->date[0]), Compare);
}




#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//通讯录
//姓名，性别，年纪，电话信息，地址信息
//0.结束
//1.增加人的信息
//2.删除人的信息
//3.查找人的信息
//4.更改人的信息
//5.排序人的信息
//6.删除所有人的信息

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MUTIFY,
	SORT,
	EMPTY,
	PRINT
};

//选择菜单
void menu()
{
	printf("*************************************\n");
	printf("*************************************\n");
	printf("*****1. ADD      2. DEL    **********\n");
	printf("*****3. SEARCH   4. MUTIFY  *********\n");
	printf("*****5. SORT	 6. EMPTY  **********\n");
	printf("*****7. PRINT    0.EXIT  ************\n");
	printf("*************************************\n");
	printf("*************************************\n");
}

int main()
{
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitPeoInfo(&con);

	int input = 0;
	do {
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input) {
		case EXIT:
			printf("操作结束!\n");
			break;
		case ADD:
			AddInfo(&con);
			break;
		case DEL:
			DelInfo(&con);
			break;
		case SEARCH:
			SearchInfo(&con);
			break;
		case MUTIFY:
			MutifyInfo(&con);
			break;
		case SORT:
			SortInfo(&con);
			break;
		case EMPTY:
			EmptyInfo(&con);
			break;
		case PRINT:
			PrintInfo(&con);
			break;
		default:
			printf("输入错误，重新输入!\n");
			break;
		}
	} while (input);
}
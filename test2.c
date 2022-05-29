#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//ͨѶ¼
//�������Ա���ͣ��绰��Ϣ����ַ��Ϣ
//0.����
//1.�����˵���Ϣ
//2.ɾ���˵���Ϣ
//3.�����˵���Ϣ
//4.�����˵���Ϣ
//5.�����˵���Ϣ
//6.ɾ�������˵���Ϣ

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

//ѡ��˵�
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
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitPeoInfo(&con);

	int input = 0;
	do {
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input) {
		case EXIT:
			printf("��������!\n");
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
			printf("���������������!\n");
			break;
		}
	} while (input);
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	// ��ʼ��ɨ��
	// 0��ʾ������
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');

	// ������
	setMine(mine, ROW, COL);

	// ��ӡɨ������
	displayBoard(show, ROW, COL);
	
	// �Ų���
	findMine(mine, show, ROW, COL);

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("����������ֲ�����!����������\n");
		}
	} while (input);

	return 0;
}
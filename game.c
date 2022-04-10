#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

// ��ӡ���˵�
void menu()
{
	printf("��ʼ��Ϸ��ѡ��--->1\n");
	printf("�˳���Ϸ��ѡ��--->0\n");
}

// ��ʼ������
void initBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

// ��ӡ����
void displayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------ɨ����Ϸ--------\n");
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ����Ϸ--------\n");
}

// ����
void setMine(char mine[ROWS][COLS], int row, int col)
{
	// count��ʾ���׵�����
	int count = COUNT;
	while (count) {
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (mine[i][j] == '0') {
			mine[i][j] = '1';
			count--;
		}
	}
}

// ��ȡ�����׵�λ����Χ�˸��׵�����
static int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}
// ����
// ����Ҫ��ĵر�
// 1.δѡ���ף��鿴��Χ�İ˸��м����ף���Ϸ����
// 2.ѡ�����ף�����

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - COUNT) {
		printf("��������ѡ�������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("��λ��Ϊ��,��Ϸʧ��!\n");
				break;
			}
			else if (show[x][y] == '*') {
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				// ��ʾ�Ų������Ϣ
				displayBoard(show, row, col);
				win++;
			}
			else if(show[x][y] != '*') {
				printf("��λ���������!����������\n");
			}
		}
		else {
			printf("�������λ�ò����Ϲ���!����������\n");
		}
	}
	if (win == row * col - COUNT) {
		printf("��ϲ�㣬�ɹ������Ϸ!\n");
		displayBoard(mine, row, col);
	}
}
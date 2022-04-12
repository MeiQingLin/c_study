#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"

//ѡ�����
void menu()
{
	printf("��ʼ��Ϸ��ѡ��--->1\n");
	printf("�˳���Ϸ��ѡ��--->0\n");
}
//��ÿ��λ�ñ�Ϊ�ո�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
//��ӡ������
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1) {
		printf("�����--->");
		printf("����������λ��:");
		scanf("%d %d", &x, &y);
		// �жϺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("���걻ռ�ã�����������!\n");
			}
		}
		else {
			printf("�����������λ�÷Ƿ�,����������!\n");
		}
	}
}
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		// �ж�ռλ���
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			printf("������---> %d %d\n", x + 1, y + 1);
			break;
		}
	}

}
//�ж���Ӯ
//* ��ʾ���Ӯ
//# ��ʾ����Ӯ
//Q ��ʾƽ��
//C ��ʾ����
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	// �ж���
	for (i = 0; i < row; i++) {
		int flag = 0;
		for (j = 0; j < col - 1; j++) {
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ') {
				flag++;
			}
		}
		if (flag == col - 1) {
			return board[i][j];
		}
	}
	// �ж���
	for (i = 0; i < col; i++) {
		int flag = 0;
		for (j = 0; j < row - 1; j++) {
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ') {
				flag++;
			}
		}
		if (flag == row - 1) {
			return board[j][i];
		}
	}
	// �ж϶Խ����ϵ�
	for (i = 0; i < row - 1 && j < col - 1;) {
		int flag = 0;
		if (board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ') {
			flag++;
		}
		i++;
		j++;
		if (flag == row - 1) {
			return board[i][j];
		}
	}
	// �ж�ƽ��
	int ret = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] != ' ') {
				ret++;
			}
		}
	}
	if (ret == row * col) {
		return 'Q';
	}
	return 'C';
}
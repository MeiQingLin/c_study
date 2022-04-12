#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"

//选择界面
void menu()
{
	printf("开始游戏请选择--->1\n");
	printf("退出游戏请选择--->0\n");
}
//将每个位置变为空格
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
//打印出棋盘
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
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1) {
		printf("玩家走--->");
		printf("请输入落棋位置:");
		scanf("%d %d", &x, &y);
		// 判断合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("坐标被占用，请重新输入!\n");
			}
		}
		else {
			printf("您输入的棋子位置非法,请重新输入!\n");
		}
	}
}
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		// 判断占位情况
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			printf("电脑走---> %d %d\n", x + 1, y + 1);
			break;
		}
	}

}
//判断输赢
//* 表示玩家赢
//# 表示电脑赢
//Q 表示平局
//C 表示继续
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	// 判断行
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
	// 判断列
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
	// 判断对角线上的
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
	// 判断平局
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
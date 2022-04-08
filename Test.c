#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1) {
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家胜利了!\n");
	}
	else if (ret == '#') {
		printf("电脑胜利了!\n");
	}
	else {
		printf("你们平局了!\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请输入数字选择下一步:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入数字非法,请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	// 初始化扫雷
	// 0表示不是雷
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');

	// 放置雷
	setMine(mine, ROW, COL);

	// 打印扫雷棋盘
	displayBoard(show, ROW, COL);
	
	// 排查雷
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
			printf("退出游戏!\n");
			break;
		default:
			printf("您输入的数字不符合!请重新输入\n");
		}
	} while (input);

	return 0;
}
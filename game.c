#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

// 打印出菜单
void menu()
{
	printf("开始游戏请选择--->1\n");
	printf("退出游戏请选择--->0\n");
}

// 初始化棋盘
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

// 打印棋盘
void displayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------扫雷游戏--------\n");
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
	printf("---------扫雷游戏--------\n");
}

// 放雷
void setMine(char mine[ROWS][COLS], int row, int col)
{
	// count表示放雷的数量
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

// 获取不是雷的位置周围八格雷的数量
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
// 排雷
// 输入要查的地标
// 1.未选中雷，查看周围的八格有几个雷，游戏继续
// 2.选中了雷，死亡

void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - COUNT) {
		printf("请输入您选择的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("此位置为雷,游戏失败!\n");
				break;
			}
			else if (show[x][y] == '*') {
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				// 显示排查出的信息
				displayBoard(show, row, col);
				win++;
			}
			else if(show[x][y] != '*') {
				printf("此位置您输入过!请重新输入\n");
			}
		}
		else {
			printf("您输入的位置不符合规则!请重新输入\n");
		}
	}
	if (win == row * col - COUNT) {
		printf("恭喜你，成功完成游戏!\n");
		displayBoard(mine, row, col);
	}
}
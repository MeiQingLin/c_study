#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define COUNT 10// 放雷数量

void menu();
// 初始化棋盘
void initBoard(char board[ROWS][COLS], int rows, int cols, char set);
// 打印棋盘
void displayBoard(char board[ROWS][COLS], int row, int col);
// 放雷
void setMine(char board[ROWS][COLS], int row, int cols);
// 玩家进行排查雷
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
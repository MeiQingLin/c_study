#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define COUNT 10// ��������

void menu();
// ��ʼ������
void initBoard(char board[ROWS][COLS], int rows, int cols, char set);
// ��ӡ����
void displayBoard(char board[ROWS][COLS], int row, int col);
// ����
void setMine(char board[ROWS][COLS], int row, int cols);
// ��ҽ����Ų���
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);